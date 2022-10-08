#include <iostream>
#include <cmath>
using namespace std;

struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC);
void Xuat(SOPHUC[][100], int, int);
SOPHUC ThucAoAmCuoi(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int m, n;
	Nhap(b, m, n);
	cout << endl;
	cout << "\*****Ma tran so phuc ban dau:*****";
	Xuat(b, m, n);
	cout << "\nTim so phuc cuoi cung trong ma tran thoa yeu cau: ";
	Xuat(ThucAoAmCuoi(b, m, n));
	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << endl;
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
	cout << "Nhap phan ao: ";
	cin >> x.ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "\Nhap so hang: "; cin >> m;
	cout << "\nNhap so cot: "; cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.thuc;
	cout << "\nPhan ao: " << x.ao;
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	cout << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\na[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}

SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
		for (int j = n - 1; j >= 0; j--)
			if (a[i][j].thuc < 0 && a[i][j].ao < 0)
				return a[i][j];
	return { 0,0 };
}
