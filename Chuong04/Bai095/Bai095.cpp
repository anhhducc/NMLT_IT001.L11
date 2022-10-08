#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemCot(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);
int DemChuSo(int);

int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Cot co nhieu chu so nhat: \n";
	LietKe(b, k, l);
	return 1000;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (rand() % 201) - 100;
		}
}

void Xuat(int a[][100], int m, int n)
{
	cout << "Mang thu duoc la: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
}
int DemCot(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		dem = dem + DemChuSo(a[i][d]);
	return dem;
}
int DemLonNhat(int a[][100], int m, int n)
{
	int lc = DemCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
		if (DemCot(a, m, n, j) > lc)
			lc = DemCot(a, m, n, j);
	return lc;
}
void LietKe(int  a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (DemCot(a, m, n, j) == DemLonNhat(a, m, n))
		{
			for (int i = 0; i < m; i++)
			{
				cout << setw(8) << fixed << setprecision(2) << a[i][j] << "\n";
			}
			cout << endl;
		}
}
int DemChuSo(int a)
{
	int dem = 0;
	int t = a;
	while (t != 0)
	{
		t = t / 10;
		dem++;
	}
	return dem;
}
