#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float NhoNhatCot(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k, l, c;

	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n" << endl;
	Xuat(b, k, l);
	cout << "\nNhap cot c: "; cin >> c;
	cout << "\nGia tri nho nhat tren cot " << c << " la: " << NhoNhatCot(b, k, l, c);
	return 1;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
		}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

float NhoNhatCot(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return a[0][c];
	float lc = NhoNhatCot(a, m - 1, n, c);
	if (a[m - 1][c] < lc)
		lc = a[m - 1][c];
	return lc;
}