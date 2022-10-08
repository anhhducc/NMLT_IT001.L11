#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int, int);
bool ktDoiXung(int);
int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Nhap vao cot can xet: ";
	int c;
	cin >> c;
	cout << "Nhung so doi xung cua cot " << c << " trong ma tran la: ";
	LietKe(b, k, l, c);
	return 1000;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so cot: ";
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

bool ktDoiXung(int a)
{
	if (a % 2 == 0)
		return true;
	else return false;
}

void LietKe(int a[][100], int m, int n, int c)
{
	for (int i = 0; i < m; i++)
		if (ktDoiXung(a[i][c - 1]))
			cout << setw(8) << a[i][c - 1];
}

