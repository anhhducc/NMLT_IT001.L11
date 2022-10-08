#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCon(float[][100], int, int, int, int);
void ConDau(float[][100], int, int, int&, int&);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau: \n";
	Xuat(b, k, l);	
	int vtd, vtc;
	cout << "\nMa tran con 3x3 toan duong dau tien: " << endl;
	ConDau(b, k, l, vtd, vtc);
	Xuat(b, k, l);
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
			if (a[vtd + i][vtc + j] <= 0)
				flag = 0;
	return flag;
}

void ConDau(float a[][100], int m, int n, int& vtd, int& vtc)
{
	for (int vtd = 0; vtd <= m - 3; vtd++)
		for (int vtc = 0; vtc <= n - 3; vtc++)
			if (ktCon(a, m, n, vtd, vtc) == 1)
				return;
	vtd = vtc = -1;
}
