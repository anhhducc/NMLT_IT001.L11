#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

float LonNhatDong(float[][100], int, int, int);
float LonNhatCot(float[][100], int, int, int);
void  XayDung(float[][100], int, int, float[][100], int&, int&);
int main()
{

	float b[100][100];
	int l, k;
	float c[100][100];
	int p, q;
	Nhap(b, k, l);
	cout << "\nMang thu duoc la: ";
	Xuat(b, k, l);

	XayDung(b, k, l, c, p, q);
	cout << "\nMa tran xay dung la: ";
	Xuat(c, p, q);
	return 1000;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
		}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}
float LonNhatDong(float a[][100], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}
float LonNhatCot(float a[][100], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}
void  XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (LonNhatDong(a, m, n, i) < LonNhatCot(a, m, n, j))
				b[i][j] = LonNhatCot(a, m, n, j);
			else
				b[i][j] = LonNhatDong(a, m, n, i);
		}
}