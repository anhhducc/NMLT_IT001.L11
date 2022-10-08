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
int ktCot(float a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n - 1; j++)
		if (a[d][j] < a[d][j + 1])
			flag = 0;
	return flag;
}
void LietKe(float a[][100], int m, int n)
{
	cout << "\Dong giam dan la: ";
	for (int i = 0; i < m; i++)
		if (ktCot(a, m, n, i) == 1)
			cout << setw(3) << i;
}