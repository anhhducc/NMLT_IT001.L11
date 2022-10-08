#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
int ChuSoDau(int);
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
	cout << "\nCac gia tri co chu so dau tien la chu so le: " << endl;
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

int ChuSoDau(int a)
{
	int dt = abs(a);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}

void LietKe(int* a, int n)
{
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << setw(6) << a[i];
}