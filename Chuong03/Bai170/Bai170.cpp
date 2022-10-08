#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void ThemBaoToan(int[], int&, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int x;
	cout << "\nNhap gia tri x: "; cin >> x;
	cout << "\nMang sau khi them gia tri " << x << " la: ";
	ThemBaoToan(b, k, x);
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

void ThemBaoToan(int a[], int& n, int x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}
