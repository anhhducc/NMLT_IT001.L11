#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TrungBinhCong(float[][100], int, int);
bool ktDuong(int);
int main()
{
	float b[1000][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "TrungBinhCong cac so thoa man la: ";
	cout << TrungBinhCong(b, k, l);
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
bool ktDuong(int a)
{
	if (a > 0)
		return true;
	else return false;
}

float TrungBinhCong(float a[][100], int m, int n)
{
	int dem = 0;
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktDuong(a[i][j]))
			{
				s = s + a[i][j];
				dem++;
			}
	float tb = (float)s / dem;
	return tb;
}