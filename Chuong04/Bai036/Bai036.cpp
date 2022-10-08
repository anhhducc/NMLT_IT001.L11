#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&, int&);
void Xuat(float[][100], int, int);
float Tong(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int l, k, n;
	Nhap(b, k, l, n);
	Xuat(b, k, l);
	cout << "Tong cac gia tri tren dong da chon la: ";
	cout << Tong(b, k, l, n);
	return 1000;
}

void Nhap(float a[][100], int& m, int& n, int& k)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap vao so dong can xet: ";
	cin >> k;
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

float Tong(float a[][100], int m, int n, int k)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[k - 1][j];
	return s;
}