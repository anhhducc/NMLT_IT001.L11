#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float LonNhatDong(float[][100], int, int, int);
int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	int n;
	cout << "Nhap vao so dong can xet: ";
	cin >> n;
	Xuat(b, k, l);
	cout << "So lon nhat dong da cho la: ";
	cout << LonNhatDong(b, k, l, n);
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

float LonNhatDong(float a[][100], int m, int n, int k)
{
	float flag = a[0][0];
	for (int j = 0; j < n; j++)
		if (a[k - 1][j] > flag)
			flag = a[k - 1][j];
	return flag;
}