#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO);
void Xuat(PHANSO[], int);
bool ktDuong(PHANSO);
int SoSanh(PHANSO, PHANSO);
PHANSO DuongNhoNhat(PHANSO[], int);


int main()
{
	PHANSO b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau : ";
	Xuat(b, k);
	cout << "\nGia tri duong nho nhat trong mang: ";
	Xuat(DuongNhoNhat(b, k));
	return 1;
}

void Nhap(PHANSO& P)
{
	cout << "Tu: ";
	cin >> P.tu;
	cout << "Mau: ";
	cin >> P.mau;
}

void Nhap(PHANSO a[], int& n)
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

void Xuat(PHANSO P)
{
	cout << P.tu << "/" << P.mau << setw(5);
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

bool ktDuong(PHANSO P)
{
	if (P.tu * P.mau > 0)
		return true;
	return false;
}

int SoSanh(PHANSO P, PHANSO Q)
{
	float a = (float)P.tu / P.mau;
	float b = (float)Q.tu / Q.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO lc = { -1,1 };
		return lc;
	}
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (ktDuong(a[n - 1]) == 0)
		return lc;
	if (ktDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == 1)
		lc = a[n - 1];
	return lc;
}
