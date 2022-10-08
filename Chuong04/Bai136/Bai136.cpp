#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float[][100], float&, float&);
void XuatAmGiam(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);
	cout << "\nXuat cac gia tri am giam dan: " << endl;
	XuatAmGiam(b, k, l);
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

void HoanVi(float& m, float& n)
{
	float temp = m;
	m = n;
	n = temp;
}

void XuatAmGiam(float a[][100], int m, int n)
{
	float b[100];
	int k, i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
		{
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);
		}
		for (i = 0; i < k; i++)
		{
			cout << fixed << setw(8) << setprecision(3) << b[i];
		}
}
