#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemDuongDong(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k, l, d;

	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n" << endl;
	Xuat(b, k, l);
	cout << "\nNhap dong d: "; cin >> d;
	cout << "\nSo luong so duong tren dong " << d << " la: " << DemDuongDong(b, k, l, d);
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

int DemDuongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int dem = DemDuongDong(a, m, n - 1, d);
	if (a[d][n - 1] > 0)
		dem = dem + 1;
	return dem;
}
