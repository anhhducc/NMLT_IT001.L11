#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemChuSo(int);
int DemChuSo(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n" << endl;
	Xuat(b, k, l);
	cout << "\nSo luong chu so trong ma tran: " << DemChuSo(b, k, l);
	return 1;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (rand() % 201) - 100;
		}
	}
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << a[i][j];
		}
		cout << endl;
	}
}

int DemChuSo(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChuSo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		dem = dem + DemChuSo(a[m - 1][j]);
	return dem;
}