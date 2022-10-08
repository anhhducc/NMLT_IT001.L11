#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void DuaVeDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nDua cac so chia het cho 3 ve dau mang: " << endl;
	DuaVeDau(b, k);
	Xuat(b, k);
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void DuaVeDau(int a[], int n)
{
	if (n == 0)
		return;
	if (a[n - 1] % 3 != 0)
	{
		DuaVeDau(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (a[i] % 3 != 0)
		{
			HoanVi(a[n - 1], a[i]);
			break;
		}
	DuaVeDau(a, n - 1);
}