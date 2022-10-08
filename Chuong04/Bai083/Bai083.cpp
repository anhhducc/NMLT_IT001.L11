#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float DuongNhoNhat(float[][100], int, int);
float DuongDau(float[][100], int, int);

int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Gia tri duong nho nhat: ";
	cout << DuongNhoNhat(b, k, l);
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
float DuongDau(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				return a[i][j];
}
float DuongNhoNhat(float a[][100], int m, int n)
{
	float flag = DuongDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] < flag) && (a[i][j] > 0))
				flag = a[i][j];
	return flag;
}
