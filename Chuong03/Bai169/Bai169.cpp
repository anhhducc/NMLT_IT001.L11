#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void ThemViTri(int[], int&, int, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int x, h;
	cout << "\nNhap gia tri x: "; cin >> x;
	cout << "\nNhap vi tri k: "; cin >> h;
	cout << "\nMang sau khi them " << x << " vao vi tri " << h << " la: ";
	ThemViTri(b, k, x, h);
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

void ThemViTri(int a[], int& n, int x, int h)
{
	for (int i = n; i >= h + 1; i--)
		a[i] = a[i - 1];
	a[h] = x;
	n++;
}
