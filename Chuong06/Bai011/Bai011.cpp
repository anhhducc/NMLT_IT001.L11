#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
bool ktDang3m(int);
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
	cout << "\nCac gia tri trong mang co dang 3^m: " << endl;
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

bool ktDang3m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
		t = t / 3;
	}
	return flag;
}

void LietKe(int* a, int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang3m(a[i]))
			cout << setw(6) << a[i];
}