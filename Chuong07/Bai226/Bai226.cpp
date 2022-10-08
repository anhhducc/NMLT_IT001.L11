#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongCot(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, c;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n" << endl;
	Xuat(b, k, l);
	cout << "\nNhap cot c: "; cin >> c;
	cout << "\nTong cac gia tri le tren cot " << c << " la: " << TongCot(b, k, l, c);
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

int TongCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, c);
	if (a[m - 1][c] % 2 != 0)
		s = s + a[m - 1][c];
	return s;
}
