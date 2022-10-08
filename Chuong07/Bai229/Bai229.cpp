#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TichCot(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k, l, c;

	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n" << endl;
	Xuat(b, k, l);
	cout << "\nNhap cot c: "; cin >> c;
	cout << "\nTich cac gia tri duong tren cot c: " << TichCot(b, k, l, c);
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

float TichCot(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	float T = TichCot(a, m - 1, n, c);
	if (a[m - 1][c] > 0)
		T = T * a[m - 1][c];
	return T;
}
