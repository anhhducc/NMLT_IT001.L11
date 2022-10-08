#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Tong(int[][100], int, int, int);
bool ktChinhPhuong(int);
int main()
{
	int b[1000][100];
	int l, k;
	int n;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nNhap vao so thu tu cua cot can xet: ";
	cin >> n;
	cout << "Tong cac so thoa man la: ";
	cout << Tong(b, k, l, n);
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

bool ktChinhPhuong(int a)
{
	bool kt = false;
	for (int i = 1; i < a; i++)
		if (i * i == a)
			kt = true;
	return kt;
}

int Tong(int a[][100], int m, int n, int k)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		if (ktChinhPhuong(a[i][k - 1]))
			s = s + a[i][k - 1];
	return s;
}