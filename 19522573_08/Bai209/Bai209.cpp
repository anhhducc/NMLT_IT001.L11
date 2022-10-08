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
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Tong(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "\nTong cac so phuc: ";
	Xuat(Tong(b, k));
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

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc + y.thuc;
	temp.ao = x.ao + y.ao;
	return temp;
}

SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i <= n - 1; i++)
		s = Tong(s, a[i]);
	return s;
}
