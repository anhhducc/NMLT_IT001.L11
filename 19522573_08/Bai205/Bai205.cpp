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
int SoSanh(PHANSO, PHANSO);
bool ktAm(PHANSO);
int TimViTri(PHANSO[], int);


int main()
{
	PHANSO b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau : ";
	Xuat(b, k);
	cout << "\nVi tri co gia tri am lon nhat: " << TimViTri(b, k);
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

bool ktAm(PHANSO P)
{
	if (P.tu * P.mau < 0)
		return true;
	return false;
}

int TimViTri(PHANSO a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (ktAm(a[n - 1]) == 0)
		return lc;
	if (SoSanh(a[n - 1], a[lc]) == -1)
		lc = n - 1;
	return lc;
}
