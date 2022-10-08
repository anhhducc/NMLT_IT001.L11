#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 144
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&);
void NhapD(DIEM&);
void NhapDT(DUONGTHANG&);
void Xuat(DUONGTRON);
void XuatD(DIEM);
void XuatDT(DUONGTHANG);
float CHUVI(DUONGTRON);
float KhoangCach(DIEM, DIEM);
float KhoangCach(DUONGTHANG, DIEM);
float DIENTICH(DUONGTRON);
int ktThuoc(DUONGTRON, DIEM);
int TuongDoi(DUONGTRON, DIEM);
int TuongDoi(DUONGTRON, DUONGTHANG);
int TuongDoi(DUONGTRON, DUONGTRON);

int main()
{
	// Bai 145
	DUONGTRON(a);
	cout << "\nNhap toa do duong tron: ";
	Nhap(a);

	// Bai 146
	cout << "\nDuong tron: ";
	Xuat(a);

	// Bai 147
	float p = CHUVI(a);
	cout << "\nChu vi: " << p;
	// Bai 148
	float s = DIENTICH(a);
	cout << "\nDien tich: " << s;

	// Bai 149
	DIEM A;
	NhapD(A);
	int ck = ktThuoc(a, A);
	if (ck == 1)
		cout << "\n Diem thuoc duong tron";
	else
		cout << "\n Diem ko thuoc duong tron";

	// Bai 150
	DIEM B;
	NhapD(B);
	ck = TuongDoi(a, B);
	if (ck == 2)
		cout << "\n Diem ko thuoc duong tron";
	else
		if (ck == 1)
			cout << "\n Diem thuoc duong tron";
		else
			cout << "\n Diem nam trong duong tron";

	// Bai 151
	DUONGTHANG C;
	NhapDT(C);
	ck = TuongDoi(a, C);
	if (ck == 2)
		cout << "\n Duong thang cat duong tron";
	else
		if (ck == 1)
			cout << "\n Duong thang tiep xuc duong tron";
		else
			cout << "\n Duong thang ko thuoc duong tron";

	// Bai 152
	DUONGTRON C2;
	Nhap(C2);
	ck = TuongDoi(a, C2);
	if (ck == 0)
		cout << "\n Duong tron trung voi duong tron";
	else
		if (ck == 1)
			cout << "\n Duong tron ko giao duong tron";
		else
			if (ck == 2)
				cout << "\n Duong tron tiep xuc duong tron";
			else
				if (ck == 3)
					cout << "\n Duong tron cat duong tron";
				else
					if (ck == 4)
						cout << "\n Duong tron thuoc duong tron";

	return 0;
}

void NhapD(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}
void XuatD(DIEM P)
{
	cout << setw(6) << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	NhapD(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam: \n";
	XuatD(c.I);
	cout << "\nBan Kinh: " << c.R;
	cout << "\n";
}

void NhapDT(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "\nNhap b: ";
	cin >> d.b;
	cout << "\nNhap c: ";
	cin >> d.c;
}

void XuatDT(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

float CHUVI(DUONGTRON c)
{
	return float(2 * 3.14 * c.R);
}

float DIENTICH(DUONGTRON c)
{
	return float(3.14 * c.R * c.R);
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}

int TuongDoi(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}

int TuongDoi(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCach(d, c.I);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 2;
	return 1;
}

int TuongDoi(DUONGTRON c, DUONGTRON c2)
{
	float kc = KhoangCach(c.I, c2.I);
	if (kc == 0 && c.R == c2.R)
		return 0;
	if (kc > (c.R + c2.R))
		return 1;
	if (kc == (c.R + c2.R))
		return 2;
	if (kc < (c.R + c2.R) && kc > abs(c.R - c2.R))
		return 3;
	if (kc == abs(c.R - c2.R))
		return 4;
	return 5;
}