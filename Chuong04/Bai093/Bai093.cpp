#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemDong(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);
bool ktNguyenTo(int);

int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Dong co nhieu so nguyen to nhat: \n";
	LietKe(b, k, l);
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
int DemDong(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[d][j]))
			dem++;
	return dem;
}
int DemLonNhat(int a[][100], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) > lc)
			lc = DemDong(a, m, n, i);
	return lc;
}
void LietKe(int  a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) == DemLonNhat(a, m, n))
		{
			for (int j = 0; j < n; j++)
			{
				cout << setw(8) << fixed << setprecision(2) << a[i][j];
			}
			cout << endl;
		}
}
bool ktNguyenTo(int a)
{
	bool kt = true;
	for (int i = 2; i < a; i++)
		if (a % i == 0)
			kt = false;
	return kt;
}