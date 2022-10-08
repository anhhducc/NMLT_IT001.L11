#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCon(float[][100], int, int, int, int);
void ConCuoi(float[][100], int, int, int&, int&);

int main()
{
	float b[100][100];
	int k, l;
	int vtd, vtc;
	Nhap(b, k, l);
	cout << " Ma tran ban dau: \n";
	Xuat(b, k, l);
	ConCuoi(b, k, l, vtd, vtc); 
	cout << "\nMa tran con 3x3 toan am cuoi cung: ";
	cout << "\n";
	for (int i = vtd; i < vtd + 3; i++)
	{
		for (int j = vtc; j < vtc + 3; j++)
		{
			cout << setw(7) << fixed << setprecision(2) << b[i][j];
		}
		cout << endl;
	}
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

int ktCon(float a[][100], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd + i][vtc + j] >= 0)
				flag = 0;
	return flag;
}

void ConCuoi(float a[][100], int m, int n, int&vtd, int&vtc)
{
	for (int vtd = m - 3; vtd >= 0; vtd++)
	{
		for (int vtc = n - 3; vtc >= 0; vtc++)
		{
			if (ktCon(a, m, n, vtd, vtc) == 1)
			{
				cout << vtd << vtc;
			}
		}
	}
}
