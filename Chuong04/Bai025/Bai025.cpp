#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktLe(int);
int TongLe(int[][100], int, int);

int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nTong cac so le trong ma tran tren la: ";
	cout << TongLe(b, k, l);
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
bool ktLe(int a)
{
	if (a % 2 != 0)
		return true;
	else return false;
}
int TongLe(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i += 2)
		for (int j = 0; j < n; j++)
			if (ktLe(a[i][j]))
				s = s + a[i][j];
	return s;
}