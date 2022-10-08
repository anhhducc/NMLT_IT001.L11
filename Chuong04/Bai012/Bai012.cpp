#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int);
bool ktNguyenTo(int);
int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Nhung so  Nguyen To  trong ma tran la: ";
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

bool ktNguyenTo(int a)
{
	a = abs(a);
	bool flag = true;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			flag = false;
	}
	return flag;
}

void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktNguyenTo(a[i][j]))
				cout << setw(8) << a[i][j];
}