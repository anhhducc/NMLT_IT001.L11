#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void SapCotGiam(float[][100], int, int, int);
void HoanVi(float&, float&);

int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	cout << "Nhap vao so thu tu cot can sap xep: ";
	int n;
	cin >> n;
	n = n - 1;
	Xuat(b, k, l);
	SapCotGiam(b, k, l, n);
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
void SapCotGiam(float a[][100], int m, int n, int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
				HoanVi(a[i][c], a[j][c]);
}
