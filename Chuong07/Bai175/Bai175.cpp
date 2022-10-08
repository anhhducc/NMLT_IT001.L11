#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void ThemViTri(int[], int&, int, int);

int main()
{
	int b[100];
	int k, x, vt;
	cout << "\nNhap x: "; cin >> x;
	cout << "\nNhap vi tri: "; cin >> vt;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nThem phan tu gia tri " << x << " vao vi tri " << vt << " :" << endl;
	ThemViTri(b, k, x, vt);
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

void ThemViTri(int a[], int& n, int x, int vt)
{
	if (vt == n)
	{
		a[n] = x;
		n++;
		return;
	}
	HoanVi(a[vt], x);
	ThemViTri(a, n, x, vt + 1);
}

