#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
int NguyenToLonNhat(int[][100], int, int);
int NguyenToDau(int[][100], int, int);

int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Gia tri nguyen to lon nhat: ";
	cout << NguyenToLonNhat(b, k, l);
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
}int NguyenToDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktNguyenTo(a[i][j]))
				return a[i][j];
}
int NguyenToLonNhat(int a[][100], int m, int n)
{
	int flag = NguyenToDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((ktNguyenTo(a[i][j])) && (a[i][j] > flag))
				flag = a[i][j];
	return flag;
}
bool ktNguyenTo(int a)
{
	bool kt = true;
	for (int i = 2; i < a; i++)
		if (a % i == 0)
			kt = false;
	return kt;
}