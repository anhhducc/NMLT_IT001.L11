#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DUONGTHANG&);
void NhapDiem(DIEM&);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG);
void XuatDiem(DIEM);
void Xuat(DUONGTHANG[], int);
int ktThuoc(DUONGTHANG, DIEM);
int ktQuaDiem(DUONGTHANG[], int, DIEM);


int main()
{
	DUONGTHANG b[100];
	int k;
	DIEM P;
	Nhap(b, k);
	cout << "\n***Mang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nNhap toa do diem P: " << endl;
	NhapDiem(P);
	XuatDiem(P);
	cout << endl;
	cout << "\nKiem tra co duong thang di qua diem P ko: " << ktQuaDiem(b, k, P);
	return 1;
}

void Nhap(DUONGTHANG& d)
{
	cout << endl;
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void NhapDiem(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "*Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

void XuatDiem(DIEM P)
{
	cout << endl;
	cout << "Diem P: ";
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Duong thang a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}

int ktQuaDiem(DUONGTHANG a[], int n, DIEM p)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktThuoc(a[i], p) == 1)
			flag = 1;
	return flag;
}
