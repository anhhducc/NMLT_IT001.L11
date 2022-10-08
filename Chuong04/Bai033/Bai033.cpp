#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void Xuat(int[][100], int, int);
bool ktChan(int);
int Tong(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int l, k, n;
	Nhap(b, k, l, n);
	Xuat(b, k, l);
	cout << "\nTong cac so chan tren dong da chon cua ma tran tren la: ";
	cout << Tong(b, k, l, n);
	return 1000;
}
void Nhap(int a[][100], int& m, int& n, int& k)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap vao dong can xet: ";
	cin >> k;
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
bool ktChan(int a)
{
	if (a % 2 == 0)
		return true;
	else return false;
}
int Tong(int a[][100], int m, int n, int k)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		if (ktChan(a[k - 1][j]))
			s = s + a[k - 1][j];
	return s;
}