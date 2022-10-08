#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 160
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct tamgiac
{
	diem a;
	diem b;
	diem c;
};
typedef struct tamgiac TAMGIAC;
void NHAP(TAMGIAC&);
void NhapD(DIEM&);
void XUAT(TAMGIAC);
void XuatD(DIEM);
float KhoangCach(DIEM, DIEM);
float KiemTra(TAMGIAC);
float CHUVI(TAMGIAC);
float DIENTICH(TAMGIAC);
DIEM TRONGTAM(TAMGIAC);
DIEM HOANHLONNHAT(TAMGIAC);
DIEM TUNGNHONHAT(TAMGIAC);
float TONGKHOANGCACH(TAMGIAC, DIEM);
int DangTamGiac(TAMGIAC);

int main()
{

	// Bai 161
	TAMGIAC(a);
	cout << "\nNhap tam giac: ";
	NHAP(a);

	// Bai 162
	cout << "\Tam giac vua nhap: ";
	XUAT(a);

	// Bai 163
	cout << "\nCheck 3 dinh: ";
		int ck = KiemTra(a);
	if (ck == 1)
		cout << "\n Lap thanh tam giac\n";
	else
		cout << "\n Khong lap thanh tam giac\n";
	cout << endl;

	// Bai 164
	float p = CHUVI(a);
	cout << "\nChu vi: " << p;
	cout << endl;

	// Bai 165
	float s = DIENTICH(a);
	cout << "\nDien tich: " << s;
	cout << endl;

	// Bai 166
	DIEM A;
	A = TRONGTAM(a);
	cout << "\nToa do trong tam: ";
	XuatD(A);
	cout << endl;

	// Bai 167
	DIEM B;
	B = HOANHLONNHAT(a);
	cout << "\nDinh trong tam giac co hoanh do lon nhat: ";
	XuatD(B);
	cout << endl;

	// Bai 168
	DIEM C;
	C = TUNGNHONHAT(a);
	cout << "\nDinh trong tam giac co tung do nho nhat: ";
	XuatD(C);
	cout << endl;

	// Bai 169
	DIEM P;
	NhapD(P);
	int KC = TONGKHOANGCACH(a, P);
	cout << "\nTong khoang cach tu P toi 3 dinh: " << KC;
	cout << endl;

	// Bai 170
	int kq = DangTamGiac(a);
	if (kq == 0)
		cout << "\nKo la tam giac";
	if (kq == 1)
		cout << "\nTam giac deu";
	if (kq == 2)
		cout << "\nTam giac vuong";
	if (kq == 3)
		cout << "\nTam giac vuong can";
	if (kq == 4)
		cout << "\nTam giac can";
	if (kq == 5)
		cout << "\nTam giac thuong";
	return 0;
}

void NhapD(DIEM& P)
{
	cout << "\nNhap x: \n";
	cin >> P.x;
	cout << "\nNhap y: \n";
	cin >> P.y;
}
void XuatD(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}
void NHAP(TAMGIAC& c)
{
	cout << "\nNhap dinh A: \n";
	NhapD(c.a);
	cout << "\nNhap dinh B: \n";
	NhapD(c.b);
	cout << "\nNhap dinh C: \n";
	NhapD(c.c);
}
void XUAT(TAMGIAC c)
{
	cout << "\nDinh A: \n";
	XuatD(c.a);
	cout << "\nDinh B: \n";
	XuatD(c.b);
	cout << "\nDinh C: \n";
	XuatD(c.c);

}


float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

float KiemTra(TAMGIAC c)
{
	float A = KhoangCach(c.a, c.b);
	float B = KhoangCach(c.c, c.b);
	float C = KhoangCach(c.c, c.a);
	if (A + B > C && B + C > A && A + C > B)
		return 1;
	return 0;
}

float CHUVI(TAMGIAC c)
{
	float A = KhoangCach(c.a, c.b);
	float B = KhoangCach(c.c, c.b);
	float C = KhoangCach(c.c, c.a);
	return A + B + C;
}

float DIENTICH(TAMGIAC c)
{
	float A = KhoangCach(c.a, c.b);
	float B = KhoangCach(c.c, c.b);
	float C = KhoangCach(c.c, c.a);
	float P = (A + B + C) / 2;
	return sqrt(P * (P - A) * (P - B) * (P - C));
}

DIEM TRONGTAM(TAMGIAC t)
{
	DIEM temp;
	temp.x = (t.a.x + t.b.x + t.c.x) / 3;
	temp.y = (t.a.y + t.b.y + t.c.y) / 3;
	return temp;
}

DIEM HOANHLONNHAT(TAMGIAC t)
{
	DIEM lc = t.a;
	if (t.b.x > lc.x)
		lc = t.b;
	if (t.c.x > lc.x)
		lc = t.c;
	return lc;
}

DIEM TUNGNHONHAT(TAMGIAC t)
{
	DIEM lc = t.a;
	if (t.b.y < lc.y)
		lc = t.b;
	if (t.c.y < lc.y)
		lc = t.c;
	return lc;
}

float TONGKHOANGCACH(TAMGIAC c, DIEM p)
{
	float A = KhoangCach(c.a, p);
	float B = KhoangCach(c.c, p);
	float C = KhoangCach(c.c, p);
	return A + B + C;
}

int DangTamGiac(TAMGIAC c)
{
	float A = KhoangCach(c.a, c.b);
	float B = KhoangCach(c.c, c.b);
	float C = KhoangCach(c.c, c.a);
	if (!(A + B > C && B + C > A && C + A > B))
		return 0;
	if (A == B && B == C)
		return 1;
	if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == B * B + A * A)
	{
		if (A == B || B == C || A == C)
			return 2;
		return 3;
	}
	if (A == B || B == C || A == C)
		return 4;
	return 5;
}