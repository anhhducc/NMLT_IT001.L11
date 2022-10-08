#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Dem(int[][100], int, int);
bool ktDuong(int);

int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "So cac so duong o bien la: ";
	cout << Dem(b, k, l);
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
bool ktDuong(int a)
{
	if (a > 0)
		return true;
	else return false;
}

int Dem(int a[][100], int m, int n)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktDuong(a[0][j]))
			dem++;
	}
	for (int i = 1; i < m; i++)
	{
		if (ktDuong(a[i][n - 1]))
			dem++;
	}
	for (int j = n - 2; j >= 0; j--)
	{
		if (ktDuong(a[m - 1][j]))
			dem++;
	}
	for (int i = m - 2; i > 0; i--)
	{
		if (ktDuong(a[i][0]))
			dem++;
	}
	return dem;
}