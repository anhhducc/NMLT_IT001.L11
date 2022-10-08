#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongCon(int[][100], int, int, int, int);
int TongConLonNhat(int[][100], int, int);
int main()
{
	int a[100][100];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran dau la: " << "\n";
	Xuat(a, m, n);
	cout << "\nCon lon nhat la: " << TongConLonNhat(a, m, n);
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (200 + 1) - 100;
		}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << "\n";
	}
}
int TongCon(int a[][100], int m, int n, int vtd, int vtc)
{
	int s = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			s = s + a[vtd + i][vtc + j];
	return s;
}
int TongConLonNhat(int a[][100], int m, int n)
{
	int lc = TongCon(a, m, n, 0, 0);
	for (int i = 0; i <= m - 3; i++)
		for (int j = 0; j <= n - 3; j++)
			if (TongCon(a, m, n, i, j) > lc)
				lc = TongCon(a, m, n, i, j);
	return lc;
}