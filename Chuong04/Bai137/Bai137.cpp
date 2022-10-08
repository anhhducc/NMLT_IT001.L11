#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void HoanVi( int&, int&);
bool ktNguyenTo(int);
void XuatNTTang(int[][100], int, int);


int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);
	cout << "\nXuat cac so nguyen to trong ma tran theo thu tu tang dan: " << endl;
	XuatNTTang(b, k, l);
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

void HoanVi( int& m, int& n)
{
	int temp = m;
	m = n;
	n = temp;
}

bool ktNguyenTo(int m)
{
	int dem = 0;
	for (int i = 1; i <= m; i++)
		if (m % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}


void XuatNTTang(int a[][100], int m, int n)
{
	int b[100];
	int k, i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (ktNguyenTo(a[i][j]) == true)
				b[k++] = a[i][j];
			for (i = 0; i <= k - 2; i++)
				for (j = i + 1; j <= k - 1; j++)
				{
					if (b[i]>b[j])
					HoanVi(b[i], b[j]);
				}
			for (i = 0; i < k; i++)
			{
				cout << setw(4) << b[i];
			}
}
