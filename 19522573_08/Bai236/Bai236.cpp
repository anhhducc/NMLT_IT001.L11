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
int ktThuoc3(DIEM);
int DemThuoc3(DIEM[][100], int, int);



int main()
{
	DIEM a[100][100];
	int m, n;

	Nhap(a, m, n);
	cout << "\nMa tran ban dau: ";
	Xuat(a, m, n);
	cout << "\nSo luong diem thuoc goc phan tu thu 3: " << DemThuoc3(a, m, n);
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

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}

int DemThuoc3(DIEM a[][100], int m, int n)
{
	int d = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc3(a[i][j]))
				d++;
	return d;
}
