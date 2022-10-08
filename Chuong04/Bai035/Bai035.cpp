#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void Xuat(int[][100], int, int);
bool ktDoiXung(int);
int Tong(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int l, k, n;
	Nhap(b, k, l, n);
	Xuat(b, k, l);
	cout << "\nTong cac so doi xung tren dong da chon cua ma tran tren la: ";
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
			a[i][j] = (rand() % 401) - 200;
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
bool ktDoiXung(int a)
{
	int d = 0;
	int t = a;
	int i = 1;
	while (t > 0)
	{
		i = t % 10;
		d = d * 10 + i;
		t = t / 10;
	}
	if (d == a)
		return true;
	else return false;
	if (a < 10)
		return false;
}
int Tong(int a[][100], int m, int n, int k)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		if (ktDoiXung(a[k - 1][j]))
			s = s + a[k - 1][j];
	return s;
}