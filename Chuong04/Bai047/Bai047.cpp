#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Tong(int[][100], int, int);
int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Tong cac so o bien la: ";
	cout << Tong(b, k, l);
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

int Tong(int a[][100], int m, int n)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[0][j];
	for (int i = 1; i < m; i++)
		s = s + a[i][n - 1];
	for (int j = n - 2; j >= 0; j--)
		s = s + a[m - 1][j];
	for (int i = m - 2; i > 0; i--)
		s = s + a[i][0];
	return s;
}