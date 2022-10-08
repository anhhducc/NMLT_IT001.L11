#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 153
struct diem
{
	float x;
	float y;
	float z;
};
typedef struct diem DIEMKG;
struct hinhcau
{
	DIEMKG I;
	float R;
};
typedef struct hinhcau HINHCAU;

void NHAP(HINHCAU&);
void NhapD(DIEMKG&);
void XUAT(HINHCAU);
void XuatD(DIEMKG);
float DIENTICH(HINHCAU);
float KhoangCach(DIEMKG, DIEMKG);
float THETICH(HINHCAU);
int ktThuoc(HINHCAU, DIEMKG);
int TuongDoiDT(HINHCAU, HINHCAU);

int main()
{

	// Bai 154
	HINHCAU(a);
	cout << "\nNhap hinh cau: ";
	NHAP(a);

	// Bai 155
	cout << "\nToa do hinh cau: ";
	XUAT(a);

	// Bai 156
	float s = DIENTICH(a);
	cout << "Dien tich xung quanh hinh cau" << s;

	// Bai 157
	float v = THETICH(a);
	cout << "The tich hinh cau: " << v;

	// Bai 158
	DIEMKG A;
	NhapD(A);
	int ck = ktThuoc(a, A);
	if (ck == 1)
		cout << "\n Diem thuoc hinh cau";
	else
		cout << "\n Diem ko thuoc hinh cau";

	// Bai 159
	HINHCAU C2;
	NHAP(C2);
	ck = TuongDoiDT(a, C2);
	if (ck == 0)
		cout << "\n Hinh cau trung voi hinh cau";
	else
		if (ck == 1)
			cout << "\n Hinh cau ko giao hinh cau";
		else
			if (ck == 2)
				cout << "\n Hinh cau tiep xuc hinh cau";
			else
				if (ck == 3)
					cout << "\n Hinh cau cat hinh cau";
				else
					if (ck == 4)
						cout << "\n Hinh cau chua hinh cau";

	return 0;
}

void NhapD(DIEMKG& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
	cout << "\nNhap z: ";
	cin >> P.z;
}

void XuatD(DIEMKG P)
{
	cout << setw(6) << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}


void NHAP(HINHCAU& c)
{
	cout << "\nNhap tam: ";
	NhapD(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}

void XUAT(HINHCAU c)
{
	cout << "\nTam: \n";
	XuatD(c.I);
	cout << "\nBan Kinh: " << c.R;
	cout << "\n";
}

float KhoangCach(DIEMKG P, DIEMKG Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y) + (Q.z - P.z) * (Q.z - P.z));
}

float DIENTICH(HINHCAU c)
{
	return float(4 * 3.14 * c.R * c.R);
}

float THETICH(HINHCAU c)
{
	return float((float)4 / 3 * 3.14 * c.R * c.R * c.R);
}

int ktThuoc(HINHCAU c, DIEMKG P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}

int TuongDoiDT(HINHCAU c, HINHCAU c2)
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