#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int h;
	cout << "\nNhap vi tri k: ";
	cin >> h;
	cout << "\nMang sau khi xoa phan tu tai vi tri "<<h<<" la :";
	XoaViTri(b, k, h);
	Xuat(b, k);
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

void XoaViTri(float a[], int& n, int h)
{
	for (int i = h; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
