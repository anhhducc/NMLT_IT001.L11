#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
bool ktToanLe(int);
void LietKe(int*, int);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a;
	a = new int[n];
	Nhap(a, n);
	cout << "\nMang ban dau: " << endl;
	Xuat(a, n);
	cout << "\nCac gia tri co toan chu so le trong mang: " << endl;
	LietKe(a, n);
	delete[]a;
	return 1;
}

void Nhap(int* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(5);
}

bool ktToanLe(int n)
{
	int flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t = t / 10;
	}
	return flag;
}

void LietKe(int* a, int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]))
			cout << setw(6) << a[i];
}