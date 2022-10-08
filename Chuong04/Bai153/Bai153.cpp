#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TichDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);

int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Ma tran sau khi bien doi: ";
	ThemCot(b, k, l);
	cout << l;
	Xuat(b, k, l);
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
	cout << "Mang thu duoc la: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(12) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}
float TichDong(float a[][100], int m, int n, int d)
{
	float t = 1;
	for (int j = 0; j < n; j++)
	{
		t *= a[d - 1][j];
	}
	return t;
}
void ThemCot(float a[][100], int m, int& n)
{
	n = n + 1;
	for (int i = 0; i < m; i++)
	{
		a[i][n - 1] = TichDong(a, m, n, i);
	}
}