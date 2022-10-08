#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Xuat(float[], int);
void NhapGiam(float[], int&);

int main()
{
	float b[100];
	int k;
	NhapGiam(b, k);
	cout << "\nMang sau khi nhap (giam dan): ";
	Xuat(b, k);
	return 1;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

void NhapGiam(float a[], int& n)
{
	cout << "\nNhap n: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		float x;
		cout << "Nhap a[" << i << "] :"; cin >> x;
		int j;
		for ( j = i - 1; j >= 0 && a[j] < x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;

	}
}
