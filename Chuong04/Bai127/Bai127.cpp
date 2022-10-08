#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapDongTang(float[][100], int, int, int);
void SapDongGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);
	cout << "\nSap xep cac phan tu thoa yeu cau: " << endl;
	SapXep(b, k, l);
	return 1;
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
			cout << setw(7) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

void HoanVi(float& m, float& n)
{
	float temp = m;
	m = n;
	n = temp;
}

void SapDongTang(float a[][100], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			HoanVi(a[d][i], a[d][j]);
}

void SapDongGiam(float a[][100], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			HoanVi(a[d][i], a[d][j]);
}

void SapXep(float a[][100], int m, int n)
{
	for (int i = 0; i <= m - 1; i++)
	{
		if (i % 2 == 0)
			SapDongTang(a, m, n, i);
		else
			SapDongGiam(a, m, n, i);
	}
	Xuat(a, m, n);
}

