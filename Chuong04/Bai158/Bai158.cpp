#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichTrai(float[][100], int, int);
void DichTraiDong(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);
	cout << "\nDich trai xoay vong cac cot ma tran: " << endl;
	DichTrai(b, k, l);
	Xuat(b, k, l);
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
			cout << setw(9) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

void DichTraiDong(float a[][100], int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j <=n-2; j++)
		a[d][j] = a[d][j + 1];
	a[d][n-1] = temp;
}

void DichTrai(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		DichTraiDong(a, m, n, i);
}


