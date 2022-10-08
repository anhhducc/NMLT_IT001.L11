#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG& d);
void Xuat(DUONGTHANG d);

int main()
{
	DUONGTHANG M;
	Nhap(M);
	cout << "Duong thang la: ";
	Xuat(M);
	return 1;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\na = " << d.a;
	cout << "\nb = " << d.b;
	cout << "\nc = " << d.c;
}
