#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanViCot(float[][100], int, int, int, int);
void HoanVi(float&, float&);

int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	cout << "Nhap vao so thu tu 2 cot can doi cho: ";
	int n;
	cin >> n;
	int m;
	cin >> m;
	n = n - 1;
	m = m - 1;
	Xuat(b, k, l);
	HoanViCot(b, k, l, n, m);
	cout << "Mang sau khi sap xep: ";
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
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}
void HoanVi(float& a, float& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
void HoanViCot(float a[][100], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; i++)
		HoanVi(a[i][c1], a[i][c2]);
}
