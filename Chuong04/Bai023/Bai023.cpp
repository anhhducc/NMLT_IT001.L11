#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void LietKe(float[][100], int, int);

int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nCuc tieu cua ma tran la: ";
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
void LietKe(float a[][100], int m, int n)
{
	if ((a[0][0] < a[0][1]) && (a[0][0] < a[1][0]) && (a[0][0] < a[1][1]))
		cout << setw(8) << a[0][0];
	if ((a[0][n - 1] < a[0][n - 2]) && (a[0][n - 1] < a[1][n - 1]) && (a[0][n - 1] < a[1][n - 2]))
		cout << setw(8) << a[0][n - 1];
	if ((a[m - 1][0] < a[m - 1][1]) && (a[m - 1][0] < a[m - 2][0]) && (a[m - 1][0] < a[m - 2][1]))
		cout << setw(8) << a[m - 1][0];
	if ((a[m - 1][n - 1] < a[m - 2][n - 1]) && (a[m - 1][n - 1] < a[m - 1][n - 2]) && (a[m - 1][n - 1] < a[m - 2][n - 2]))
		cout << setw(8) << a[m - 1][n - 1];
	for (int j = 1; j < n - 1; j++)
		if ((a[0][j] < a[0][j - 1]) && (a[0][j] < a[1][j]) && (a[0][j] < a[0][j + 1]) && (a[0][j] < a[1][j - 1]) && (a[0][j] < a[1][j + 1]))
			cout << setw(8) << a[0][j];
	for (int i = 1; i < m - 1; i++)
		if ((a[i][n - 1] < a[i - 1][n - 1]) && (a[i][n - 1] < a[i][n - 2]) && (a[i][n - 1] < a[i + 1][n - 1]) && (a[i][n - 1] < a[i - 1][n - 2]) && (a[i][n - 1] < a[i + 1][n - 2]))
			cout << setw(8) << a[i][n - 1];
	for (int j = 1; j < n - 1; j++)
		if ((a[m - 1][j] < a[m - 1][j - 1]) && (a[m - 1][j] < a[m - 1][j]) && (a[m - 1][j] < a[m - 1][j + 1]) && (a[m - 1][j] < a[m - 2][j - 1]) && (a[m - 1][j] < a[m - 2][j + 1]))
			cout << setw(8) << a[m - 1][j];
	for (int i = 1; i < m - 1; i++)
		if ((a[i][0] < a[i - 1][0]) && (a[i][0] < a[i][1]) && (a[i][0] < a[i + 1][0]) && (a[i][0] < a[i - 1][1]) && (a[i][0] < a[i + 1][1]))
			cout << setw(8) << a[i][0];
	for (int i = 1; i < m - 1; i++)
		for (int j = 1; j < n - 1; j++)
			if ((a[i][j] < a[i - 1][j - 1]) && (a[i][j] < a[i - 1][j]) && (a[i][j] < a[i - 1][j + 1]) && (a[i][j] < a[i][j - 1]) && (a[i][j] < a[i][j + 1]) && (a[i][j] < a[i + 1][j - 1]) && (a[i][j] < a[i + 1][j]) && (a[i][j] < a[i + 1][j + 1]))
				cout << setw(8) << a[i][j];
}
