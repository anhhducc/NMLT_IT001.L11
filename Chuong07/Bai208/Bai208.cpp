#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDoiXung(int);
void LietKe(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, c;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n" << endl;
	Xuat(b, k, l);
	cout << "\nNhap cot can liet ke: "; cin >> c;
	cout << "\nCac so doi xung tren cot vua nhap: ";
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

bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (dn == n)
		return true;
	return false;
}

void LietKe(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n, c);
	if (ktDoiXung(a[m - 1][c]))
		cout << setw(4) << a[m - 1][c];
}