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
void HoanVi(SOPHUC&, SOPHUC&);
void SapTang(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "\nSap cac so phuc tang dan theo phan thuc: ";
	SapTang(b, k);
	Xuat(b, k);
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

void HoanVi(SOPHUC& a, SOPHUC& b)
{
	SOPHUC temp = a;
	a = b;
	b = temp;
}

void SapTang(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i].thuc > a[j].thuc)
				HoanVi(a[i], a[j]);
}