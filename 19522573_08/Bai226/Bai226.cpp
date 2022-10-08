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
void Nhap(DIEM&);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG);
void Xuat(DIEM);
void Xuat(DUONGTHANG[], int);
int ktTrung(DUONGTHANG, DUONGTHANG);
int ktCapTrungNhau(DUONGTHANG[], int);


int main()
{
	DUONGTHANG b[100];
	int k;

	Nhap(b, k);
	cout << "\n***Mang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nKiem tra co cap duong thang trung nhau ko: " << ktCapTrungNhau(b, k);
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

void Nhap(DIEM& P)
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

void Xuat(DIEM P)
{
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

int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}

int ktCapTrungNhau(DUONGTHANG a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (ktTrung(a[i], a[j]) == 1)
				flag = 1;
	return flag;
}
