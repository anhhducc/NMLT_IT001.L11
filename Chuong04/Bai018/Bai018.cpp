#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int);
void LietKe(int[][100], int, int, int);


int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);
	int c = 0;
	cout << "Nhap cot c can kiem tra: \n";
	cin >> c;
	cout << "Gia tri chan cot c: \n";
	LietKe(b, k, l, c);

	return 1;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (rand() % 201) - 100;
		}
	}
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << a[i][j];
		}
		cout << endl;
	}
}

void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
				cout << setw(7) << a[i][j];
		}
	}
}

void LietKe(int a[][100], int m, int n, int c)
{
	for (int j = 0; j < n; j++)
	{
		if (a[j][c-1] % 2 == 0)
			cout << setw(7) << a[j][c-1];
	}
}