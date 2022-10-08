#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void Xuat(int[][100], int, int);
bool kt5m(int);
int  Tong(int[][100], int, int, int);

int main()
{
	int  b[100][100];
	int l, k, n;
	Nhap(b, k, l, n);
	Xuat(b, k, l);
	cout << "Tong cac gia tri thoa man tren dong da chon la: ";
	cout << Tong(b, k, l, n);
	return 1000;
}

void Nhap(int  a[][100], int& m, int& n, int& k)
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

void Xuat(int  a[][100], int m, int n)
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
int  Tong(int  a[][100], int m, int n, int k)
{
	int  s = 0;
	for (int j = 0; j < n; j++)
		if (kt5m(a[k - 1][j]))
			s = s + a[k - 1][j];
	return s;
}
bool kt5m(int a)
{
	bool kt = false;
	int n;
	for (int i = 1; i < a; i++)
	{
		n = pow(5, i);
		if (n == a)
			kt = true;
	}
	return kt;
}
