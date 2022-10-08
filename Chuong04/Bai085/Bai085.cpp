#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int ChinhPhuongLonNhat(int[][100], int, int);
int ChinhPhuongDau(int[][100], int, int);

int main()
{
	int b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Gia tri chinh phuong lon nhat: ";
	cout << ChinhPhuongLonNhat(b, k, l);
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
}int ChinhPhuongDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a[i][j]))
				return a[i][j];
}
int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
	int flag = ChinhPhuongDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((ktChinhPhuong(a[i][j])) && (a[i][j] > flag))
				flag = a[i][j];
	return flag;
}
bool ktChinhPhuong(int a)
{
	bool kt = false;
	for (int i = 1; i < a; i++)
		if (i * i == a)
			kt = true;
	return kt;
}