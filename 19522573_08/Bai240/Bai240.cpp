#include<iostream>
#include<iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void NhapDT(DUONGTRON&);
void XuatDT(DUONGTRON);
void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM);
void Xuat(DIEM[][100], int, int);
float KhoangCach(DIEM, DIEM);
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);


int main()
{
	DIEM a[100][100];
	int m, n;
	DUONGTRON c;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: ";
	Xuat(a, m, n);
	cout << "\nNhap duong tron C: ";
	NhapDT(c);
	cout << "\nSo luong diem nam trong duong tron: " << DemDiem(a, m, n, c);
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

void NhapDT(DUONGTRON& c)
{
	cout << endl;
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void XuatDT(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R << endl;
}

float KhoangCach(DIEM M, DIEM N)
{
	float kc = sqrt((N.x - M.x) * (N.x - M.x) + (N.y - M.y) * (N.y - M.y));
	return kc;
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(c, a[i][j]))
				dem++;
	return dem;
}

