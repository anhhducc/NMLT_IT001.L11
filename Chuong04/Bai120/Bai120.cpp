#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

int DemLanCan(float[][100], int, int, int, int);
void  XayDung(float[][100], int, int, float[][100], int&, int&);
int main()
{

	float b[100][100];
	int l, k;
	float c[100][100];
	int p, q;
	Nhap(b, k, l);
	cout << "Mang thu duoc la: " << endl;
	Xuat(b, k, l);

	XayDung(b, k, l, c, p, q);
	cout << "\n Ma tran xay dung la: ";
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
int DemLanCan(float a[][100], int m, int n, int d, int c)
{
	int dem = 0;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (d + di >= 0 && d + di < m && c + dj >= 0 && c + dj < n && !(di == 0 && dj == 0) && a[d + di][c + dj]>0)
				dem++;
	return dem;
}
void  XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[i][j] = (float)DemLanCan(a, m, n, i, j);
}