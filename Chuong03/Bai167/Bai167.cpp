#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
void XoaTrung(int[], int&);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int h;
	cout << "\nNhap vi tri k: "; cin >> h;
	cout << "\nMang sau khi xoa tat ca phan tu trung nhau va chi giu lai 1 phan tu: ";
	XoaTrung(b, k);
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

void XoaViTri(int a[], int& n, int h)
{
	for (int i = h; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrung(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		int flag = 0;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 1;
		if (flag == 1)
			XoaViTri(a, n, i);
	}
}

