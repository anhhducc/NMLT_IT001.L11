#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
bool ktCP(int);
void XoaCP(int[], int&);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int h;
	cout << "\nNhap vi tri k: ";
	cin >> h;
	cout << "\nMang sau khi xoa tat ca so chinh phuong: ";
	XoaCP(b, k);
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

bool ktCP(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void XoaCP(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktCP(a[i]))
			XoaViTri(a, n, i);
}
