#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int, int);
bool kt5m(int);
int main()
{
	int b[1000][100];
	int l, k;
	int n;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nNhap vao so thu tu cua cot can xet: ";
	cin >> n;
	LietKe(b, k, l, n);
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

bool kt5m(int a)
{
	bool kt = false;
	int n;
	for (int i = 1; i < a; i++)
	{
		n = pow(5, i);
		if (n == a)
			kt = true;
	}
	return kt;
}

void LietKe(int a[][100], int m, int n, int k)
{
	k = k - 1;
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (kt5m(a[i][k]))
		{
			cout << setw(8) << a[i][k];
			dem++;
		}
	if (dem == 0)
		cout << "\nKhong co so co dang 5^m.";
}