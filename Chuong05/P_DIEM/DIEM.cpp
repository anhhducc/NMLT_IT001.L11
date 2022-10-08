#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 047
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

DIEM DoiXungGoc(DIEM);
float KhoangCach(DIEM, DIEM);
float KhoangCachX(DIEM, DIEM);
float KhoangCachY(DIEM, DIEM);
float KhoangCachGoc(DIEM);
DIEM DoiXungHoanh(DIEM);
DIEM DoiXungTung(DIEM);
DIEM DoiXungPhanGiac1(DIEM);
DIEM DoiXungPhanGiac2(DIEM);
int ktTrung(DIEM, DIEM);
int ktThuoc1(DIEM);
int ktThuoc2(DIEM);
int ktThuoc3(DIEM);
int ktThuoc4(DIEM);

int main()
{
	// Bai 048
	DIEM A, B;
	cout << "\nNhap toa do diem A: ";
	Nhap(A);
	cout << "\nNhap toa do diem B: ";
	Nhap(B);

	// Bai 049
	cout << "\nToa do diem A: ";
	Xuat(A);
	cout << "\nToa do diem B: ";
	Xuat(B);

	// Bai 050
	cout << setw(6) << setprecision(3);
	cout << "\nKhoang cach giua 2 diem A va B: " << KhoangCach(A, B);

	// Bai 051
	cout << "\nKhoang cach giua 2 diem theo phuong Ox: " << KhoangCachX(A, B);

	// Bai 052
	cout << "\nKhoang cach giua 2 diem theo phuong Oy: " << KhoangCachY(A, B);

	// Bai 053
	cout << "\nKhoang cach den goc toa do: " << KhoangCachGoc(A);

	// Bai 054
	DIEM C;
	C = DoiXungGoc(A);
	cout << "\nDiem doi xung voi A qua goc toa do: ";
	Xuat(C);

	// Bai 055
	cout << "\nToa do diem doi xung qua truc hoanh: ";
	Xuat(DoiXungHoanh(A));

	// Bai 056
	cout << "\nToa do diem doi xung qua truc tung: ";
	Xuat(DoiXungTung(A));

	// Bai 057
	cout << "\nToa do diem doi xung qua duong phan giac thu 1: ";
	Xuat(DoiXungPhanGiac1(A));

	// Bai 058
	cout << "\nToa do diem doi xung qua duong phan giac thu 2: ";
	Xuat(DoiXungPhanGiac2(A));

	// Bai 059
	cout << "\nCheck 2 diem co trung nhau ko?  " << ktTrung(A, B);

	// Bai 060
	cout << "\nCheck diem co thuoc phan tu thu I ko?  " << ktThuoc1(A);

	// Bai 061
	cout << "\nCheck diem co thuoc phan tu thu II ko?  " << ktThuoc2(A);

	// Bai 062
	cout << "\nCheck diem co thuoc phan tu thu III ko?  " << ktThuoc3(A);

	// Bai 063
	cout << "\nCheck diem co thuoc phan tu thu IV ko?  " << ktThuoc4(A);

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


DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

float KhoangCachX(DIEM P, DIEM Q)
{
	return abs(Q.x - P.x);
}

float KhoangCachY(DIEM P, DIEM Q)
{
	return abs(Q.y - P.y);
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

DIEM DoiXungHoanh(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}

DIEM DoiXungTung(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	return temp;
}

DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM  temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}

DIEM DoiXungPhanGiac2(DIEM P)
{
	DIEM temp;
	temp.x = -P.y;
	temp.y = -P.x;
	return temp;
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

int ktThuoc1(DIEM P)
{
	if (P.x > 0 && P.y > 0)
		return 1;
	return 0;
}

int ktThuoc2(DIEM P)
{
	if (P.x < 0 && P.y>0)
		return 1;
	return 0;
}

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}

int ktThuoc4(DIEM P)
{
	if (P.x > 0 && P.y < 0)
		return 1;
	return 0;
}
