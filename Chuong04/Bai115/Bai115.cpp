#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int ktCot(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran dau la: " << "\n";
	Xuat(a, m, n);

	LietKe(a, m, n);
	return 1;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (200 + 1) - 100;
		}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << "\n";
	}
}
bool ktChinhPhuong(int k)
{
	for (int i = 1; i * i <= k; i++)
		if (i * i == k)
			return true;
	return false;
}
int ktCot(int a[][100], int m, int n, int c)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
		if (ktChinhPhuong(a[i][c]))
			flag = 1;
	return flag;
}
void LietKe(int a[][100], int m, int n)
{
	cout << "\nCot chua chinh phuong la: ";
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j) == 1)
			cout << setw(3) << j;

}