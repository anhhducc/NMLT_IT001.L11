#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 064
struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachX(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachZ(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachGoc(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN);
int ktTrung(DIEMKHONGGIAN, DIEMKHONGGIAN);


int main()
{
	// Bai 065
	DIEMKHONGGIAN A, B;
	cout << "\nNhap toa do diem khong gian A: ";
	Nhap(A);
	cout << "\nNhap toa do diem khong gian B: ";
	Nhap(B);

	// Bai 066
	cout << "\nToa do diem khong gian A: ";
	Xuat(A);
	cout << "\nToa do diem khong gian B: ";
	Xuat(B);

	// Bai 067
	cout << setw(6) << setprecision(3);
	cout << "\nKhoang cach giua 2 diem khong gian A va B: " << KhoangCach(A, B);

	// Bai 068
	cout << "\nKhoang cach giua 2 diem khong gian theo phuong x: " << KhoangCachX(A, B);

	// Bai 069
	cout << "\nKhoang cach giua 2 diem khong gian theo phuong y: " << KhoangCachY(A, B);

	// Bai 070
	cout << "\nKhoang cach giua 2 diem khong gian theo phuong z: " << KhoangCachZ(A, B);

	// Bai 071
	cout << "\nKhoang cach den goc toa do: " << KhoangCachGoc(A);

	// Bai 072
	DIEMKHONGGIAN C;
	C = DoiXungGoc(A);
	cout << "\nToa do diem doi xung qua goc toa do: ";
	Xuat(C);

	// Bai 073
	cout << "\nToa do diem doi xung qua mp Oxy: ";
	Xuat(DoiXungOxy(A));
	
	// Bai 074
	cout << "\nToa do diem doi xung qua mp Oxz: ";
	Xuat(DoiXungOxz(A));
	
	// Bai 075
	cout << "\nToa do diem doi xung qua mp Oyz: ";
	Xuat(DoiXungOyz(A));

	// Bai 076
	cout << "\nCheck 2 diem co trung nhau ko? " << ktTrung(A, B);

	return 1;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
	cout << "\nNhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6) << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz= " << P.z;
}


float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y)) + (Q.z - P.z) * (Q.z - P.z);
}

float KhoangCachX(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.x - P.x);
}

float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}

float KhoangCachZ(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.z - P.z);
}

float KhoangCachGoc(DIEMKHONGGIAN P)
{
	return sqrt(P.x * P.x + P.y * P.y + P.z * P.z);
}

DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = -P.y;
	temp.z = -P.z;
	return temp;
}

DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}

DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = P.y;
	temp.z = P.z;
	return temp;
}

int ktTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if (P.x == Q.x && P.y == Q.y && P.z == Q.z)
		return 1;
	return 0;
}
