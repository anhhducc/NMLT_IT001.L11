#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 077
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

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
float KhoangCach(DUONGTHANG, DIEM);
int ktThuoc(DUONGTHANG, DIEM);
int ktTrung(DUONGTHANG, DUONGTHANG);
int ktSongSong(DUONGTHANG, DUONGTHANG);
int ktCat(DUONGTHANG, DUONGTHANG);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
int ktVuongGoc(DUONGTHANG, DUONGTHANG);


int main()
{
	
	DIEM P;
	cout << "\nNhap toa do diem: ";
	Nhap(P);
	cout << "\nToa do cua diem: ";
	Xuat(P);

	// Bai 078
	DUONGTHANG d1;
	DUONGTHANG d2;
	cout << "\nNhap cac he so cua duong thang d1: ";
	Nhap(d1);
	cout << "\nNhap cac he so cua duong thang d2: ";
	Nhap(d2);

	// Bai 079
	cout << "\nDuong thang d1: ";
	Xuat(d1);
	cout << "\nDuong thang d2: ";
	Xuat(d2);

	// Bai 080
	cout << "\nKhoang cach giua diem va duong thang d1: " << KhoangCach(d1, P);

	// Bai 081
	cout << "\nCheck diem co thuoc duong thang d1 hay ko? " << ktThuoc(d1, P);

	// Bai 082
	cout << "\nCheck 2 duong thang co trung nhau ko? " << ktTrung(d1, d2);

	// Bai 083
	cout << "\nCheck 2 duong thang co song song nhau ko? " << ktSongSong(d1, d2);

	// Bai 084
	cout << "\nCheck 2 duong thang co cat nhau ko? " << ktCat(d1, d2);

	// Bai 085
	DIEM A;
	A = GiaoDiem(d1, d2);
	cout << "\nGiao diem cua 2 duong thang: ";
	Xuat(A);

	// Bai 086
	cout << "\nCheck 2 duong thang co vuong goc nhau ko? " << ktVuongGoc(d1, d2);


	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6) << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "\nNhap b: ";
	cin >> d.b;
	cout << "\nNhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}


float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}

int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}

int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D= d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}

int ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;
	return 0;
}
