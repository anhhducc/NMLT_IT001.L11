#include <iostream>
#include <cmath>
using namespace std;

struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int);
SOPHUC DauTien(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "\nSo phuc dau tien co phan thuc duong va phan ao duong: ";
	Xuat(DauTien(b, k));
	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
	cout << "Nhap phan ao: ";
	cin >> x.ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.thuc;
	cout << "\nPhan ao: " << x.ao;
}

void Xuat(SOPHUC a[], int n)
{
	cout << endl;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << endl;
		cout << "\nSo phuc a[" << i << "]: ";
		Xuat(a[i]);
	}
}

SOPHUC DauTien(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i].thuc > 0 && a[i].ao > 0)
			return a[i];
	SOPHUC lc = { 0,0 };
	return lc;
}
