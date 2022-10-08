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

int UCLN(int, int);
int ktToiGian(PHANSO);
void HoanVi(PHANSO&, PHANSO&);
int SoSanh(PHANSO, PHANSO);
void SapTang(PHANSO[][100], int, int);
void LietKe(PHANSO[][100], int, int);


int main()
{
	PHANSO b[100][100];
	int m, n;

	Nhap(b, m, n);
	cout << "\nMa tran ban dau: " << endl;
	Xuat(b, m, n);
	cout << "\nLiet ke cac phan so toi gian theo thu tu tang dan: " << endl;
	LietKe(b, m, n);
	Xuat(b, m, n);
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

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

int ktToiGian(PHANSO x)
{
	if (UCLN(x.tu, x.mau) == 1)
		return 1;
	return 0;
}

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
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

void SapTang(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i <= m * n - 2; i++)
		for (int j = i + 1; j <= m * n - 1; j++)
			if (SoSanh(a[i / n][i % n], a[j / n][j % n]) == 1)
				HoanVi(a[i / n][i % n], a[j / n][j % n]);
}

void LietKe(PHANSO a[][100], int m, int n)
{
	PHANSO b[100];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToiGian(a[i][j]))
				b[k++] = a[i][j];
}
