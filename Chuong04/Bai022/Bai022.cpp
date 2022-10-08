#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int);
bool ktLe(int);
int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Nhung so le o bien la: ";
	LietKe(b, k, l);
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

void LietKe(int a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		if (ktLe(a[0][j]))
			cout << setw(4) << a[0][j];
	}
	for (int i = 1; i < m; i++)
	{
		if (ktLe(a[i][n - 1]))
			cout << setw(4) << a[i][n - 1];
	}
	for (int j = n - 2; j >= 0; j--)
	{
		if (ktLe(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
	}
	for (int i = m - 2; i > 0; i--)
	{
		if (ktLe(a[i][0]))
			cout << setw(4) << a[i][0];
	}
}

bool ktLe(int a)
{
	if (a % 2 == 0)
		return false;
	else return true;
}