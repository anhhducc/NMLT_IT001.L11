#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TanSuat(int[][100], int, int, int);
void TimGiaTri(int[][100], int, int);
int GiaTriNhieuNhat(int[][100], int, int);


int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Gia tri co tan suat xuat hien nhieu nhat la: ";
	TimGiaTri(b, k, l);
	return 1000;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (rand() % 201) - 100;
		}
}

void Xuat(int a[][100], int m, int n)
{
	cout << "Mang thu duoc la: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
}
int TanSuat(int a[][100], int m, int n, int k)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] == k))
				dem++;
	return dem;
}
int GiaTriNhieuNhat(int a[][100], int m, int n)
{
	int gt = a[0][0];
	int ln = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) > ln)
				ln = TanSuat(a, m, n, a[i][j]);
	return ln;
}
void TimGiaTri(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) == GiaTriNhieuNhat(a, m, n))
			{
				cout << setw(8) << a[i][j];
			}
}