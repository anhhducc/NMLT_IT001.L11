#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktDong(int[][100], int, int, int);
void LietKe(int[][100], int, int);
bool ktNguyenTo(int);

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
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int ktDong(int a[][100], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[d][j]))
			flag = 1;
	return flag;
}
void LietKe(int a[][100], int m, int n)
{
	cout << "\nDong co chua gia tri nguyen to la : ";
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i) == 1)
			cout << setw(8) << i;

}