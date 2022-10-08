#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int TanSuat(float[][100], int, int, float);
float TimGiaTri(float[][100], int, int);
int GiaTriNhieuNhat(float a[][100], int m, int n);

int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Gia tri co tan suat xuat hien nhieu nhat la: ";
	cout << TimGiaTri(b, k, l);
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

int TanSuat(float a[][100], int m, int n, float k)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] == k))
				dem++;
	return dem;
}
int GiaTriNhieuNhat(float a[][100], int m, int n)
{
	int gt = a[0][0];
	int ln = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) > ln)
				ln = TanSuat(a, m, n, a[i][j]);
	return ln;
}
float TimGiaTri(float a[][100], int m, int n)
{
	float gt = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) == GiaTriNhieuNhat(a, m, n))
			{
				gt = a[i][j];
			}
	return gt;
}