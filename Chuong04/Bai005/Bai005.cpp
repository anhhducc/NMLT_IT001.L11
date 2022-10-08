#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

int main()
{
	int a[100][100];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran dau la: " << "\n";
	Xuat(a, m, n);

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
			a[i][j] = rand();
		}
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j] << " ";
		cout << "\n";
	}
}