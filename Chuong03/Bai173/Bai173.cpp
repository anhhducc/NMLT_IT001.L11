#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int vt, l;
	cout << "\nNhap do dai l: "; cin >> l;
	cout << "\nNhap vi tri: "; cin >> vt;
	cout << "\nMang con la: ";
	XuatCon(b, k, vt, l);
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

void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i < l; i++)
		cout << setw(6) << a[vt + i];
}
