#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktHoanThien(int);
int Dem(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int l, k, n;
	Nhap(b, k, l);
	cout << "\nNhap vao hang can tinh: ";
	cin >> n;
	Xuat(b, k, l);
	cout << "\nSo cac so hoan thien trong hang da nhap la: ";
	cout << Dem(b, k, l, n);
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
bool ktHoanThien(int a)
{
	int s = 0;
	for (int i = 1; i < a; i++)
		if (a % i == 0)
			s = s + i;
	if (s == a)
		return true;
	else return false;
}
int Dem(int a[][100], int m, int n, int k)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (ktHoanThien(a[k - 1][j]))
			dem++;
	return dem;
}