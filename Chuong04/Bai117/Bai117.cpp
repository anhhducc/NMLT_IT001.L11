#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCot(float[][100], int, int, int);
void LietKe(float[][100], int, int);
int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);

	LietKe(b, k, l);
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
int ktCot(float a[][100], int m, int n, int c)
{
	int flag = 1;
	for (int i = 0; i < m - 1; i++)
		if (a[i][c] > a[i + 1][c])
			flag = 0;
	return flag;
}
void LietKe(float a[][100], int m, int n)
{
	cout << "\nCot tang dan la: ";
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j) == 1)
			cout << setw(3) << j;
}