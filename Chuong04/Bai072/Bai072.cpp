#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemPhanBiet(float[][100], int, int);
int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "So luong gia tri phan biet: ";
	cout << k * l - DemPhanBiet(b, k, l);
	return 1000;
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
	cout << "Mang thu duoc la: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}
bool kt(int a, int b)
{
	if (a == b)
		return true;
	else return false;
}

int DemPhanBiet(float a[][100], int m, int n)
{
	int t = 0;
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			for (int k = i + 1; k < m; k++)
			{
				for (int l = j + 1; l < n; l++)
					if (kt(a[i][j], a[k][l]))
						dem++;
				if (dem > 1)
					t = t + dem - 1;
			}
	return t;
}