#include<iostream>
#include<iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM);
void Xuat(DIEM[][100], int, int);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);
int DemKhongTrung(DIEM[][100], int, int);


int main()
{
	DIEM a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: ";
	Xuat(a, m, n);
	cout << "\nSo luong diem khong trung voi cac diem khac: " << DemKhongTrung(a, m, n);
	return 1;
}

void Nhap(DIEM& a)
{
	cout << "Nhap x: "; cin >> a.x;
	cout << "Nhap y: "; cin >> a.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so hang: "; cin >> m;
	cout << "\nNhap so cot: "; cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << endl;
			cout << "Nhap a[" << i << "][" << j << "]: " << endl;
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM a)
{
	cout << "\nx=" << a.x;
	cout << "\ny=" << a.y;
	cout << endl;
}

void Xuat(DIEM a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nToa do diem a[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

int TanSuat(DIEM a[][100], int m, int n, DIEM P)
{
	int d = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrung(a[i][j], P))
				d++;
	return d;
}

int DemKhongTrung(DIEM a[][100], int m, int n)
{
	int d = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) == 1)
				d++;
	return d;
}
