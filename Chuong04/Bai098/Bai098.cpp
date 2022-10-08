#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool ktYenNgua(float[][100], int, int, int, int);
int Dem(float[][100], int, int);
int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "So cac so yen ngua la: ";
	cout << Dem(b, k, l);
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
bool ktYenNgua(float a[][100], int m, int n, int d, int c)
{
	bool kt = true;
	for (int j = 0; j < n; j++)
		if (a[d][j] > a[d][c])
			kt = false;
	for (int i = 0; i < m; i++)
		if (a[i][c] < a[d][c])
			kt = false;
	return kt;
}
int Dem(float a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktYenNgua(a, m, n, i, j))
				dem++;
	return dem;
}