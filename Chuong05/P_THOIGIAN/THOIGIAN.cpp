#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 125
struct thoigian
{
	int gio;
	int phut;
	int giay;
};
typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
int ktHopLe(THOIGIAN);
THOIGIAN KeTiep(THOIGIAN);
THOIGIAN TruocDo(THOIGIAN);
int STT(THOIGIAN);
int KhoangCach(THOIGIAN, THOIGIAN);
int SoSanh(THOIGIAN, THOIGIAN);

int main()
{

	// Bai 126
	THOIGIAN x, y;
	cout << "\Nhap thoi gian 1: ";
	Nhap(x);
	cout << "\nNhap thoi gian 2: ";
	Nhap(y);

	// Bai 127
	cout << "\nThoi gian thu 1: ";
	Xuat(x);
	cout << endl;
	cout << "\nThoi gian thu 2: ";
	Xuat(y);
	cout << endl;

	// Bai 128
	cout << "\nCheck tinh hop le cua thoi gian: " << ktHopLe(x);
	cout << endl;
	
	// Bai 129
	THOIGIAN A = KeTiep(x);
	cout << "\nThoi gian o giay ke tiep: "; Xuat(A);
	cout << endl;

	// Bai 130
	THOIGIAN B = TruocDo(x);
	cout << "\nThoi gian o giay truoc do: "; Xuat(B);
	cout << endl;

	// Bai 131
	cout << "\nSo thu tu giay ke tu luc 00:00:00  : " << STT(x);
	cout << endl;

	// Bai 132
	cout << "\nKhoang cach giua 2 thoi gian: " << KhoangCach(x,y);
	cout << endl;

	// Bai 133
	cout << "\nSo sanh 2 thoi gian: " << SoSanh(x, y);

	return 1;
}

void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.gio;
	cout << "Nhap phut: ";
	cin >> x.phut;
	cout << "Nhap giay: ";
	cin >> x.giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.gio;
	cout << "Phut: " << x.phut;
	cout << "Giay: " << x.giay;
}


int ktHopLe(THOIGIAN x)
{
	if (!(x.gio >= 0 && x.gio <= 23))
		return 0;
	if (!(x.phut >= 0 && x.phut <= 59))
		return 0;
	if (!(x.giay >= 0 && x.giay <= 59))
		return 0;
	return 1;
}

THOIGIAN KeTiep(THOIGIAN x)
{
	x.giay++;
	if (x.giay > 59)
	{
		x.phut++;
		if (x.phut > 59)
		{
			x.gio++;
			if (x.gio > 23)
				x.gio = 0;
			x.phut = 0;
		}
		x.giay = 0;
	}
	return x;
}

THOIGIAN TruocDo(THOIGIAN x)
{
	x.giay--;
	if (x.giay < 0)
	{
		x.phut--;
		if (x.phut < 0)
		{
			x.gio--;
			if (x.gio < 0)
				x.gio = 23;
			x.phut = 59;
		}
		x.giay = 59;
	}
	return x;
}

int STT(THOIGIAN x)
{
	return x.gio * 3600 + x.phut * 60 + x.giay;
}

int KhoangCach(THOIGIAN x, THOIGIAN y)
{
	int a = STT(x);
	int b = STT(y);
	return abs(a - b);
}

int SoSanh(THOIGIAN x, THOIGIAN y)
{
	if (x.gio > y.gio)
		return 1;
	if (x.gio < y.gio)
		return -1;
	if (x.phut > y.phut)
		return 1;
	if (x.phut < y.phut)
		return -1;
	if (x.giay > y.giay)
		return 1;
	if (x.giay < y.giay)
		return -1;
	return 0;
}
