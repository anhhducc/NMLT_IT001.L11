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
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO);
void Xuat(PHANSO[][100], int, int);
int SoSanh(PHANSO, PHANSO);
bool ktAm(PHANSO);
PHANSO AmMax(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int m, n;

	Nhap(b, m, n);
	cout << "\nMa tran ban dau: " << endl;
	Xuat(b, m, n);
	cout << "\nPhan so am lon nhat: ";
	Xuat(AmMax(b, m, n));
	return 1;
}

void Nhap(PHANSO& P)
{
	cout << endl;
	cout << "Tu: ";
	cin >> P.tu;
	cout << "Mau: ";
	cin >> P.mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so hang: "; cin >> m;
	cout << "\nNhap so cot: "; cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]:";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO P)
{
	cout << setw(3) << P.tu << "/" << P.mau;
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
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

PHANSO AmMax(PHANSO a[][100], int m, int n)
{
	PHANSO temp = { 0,1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktAm(a[i][j]))
				if (SoSanh(lc, temp) == 0 || (SoSanh(a[i][j], lc) == 1))
					lc = a[i][j];
	return lc;
}
