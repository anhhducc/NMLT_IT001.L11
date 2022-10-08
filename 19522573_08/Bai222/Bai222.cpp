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

int main()
{
	DUONGTHANG b[100];
	int k;

	Nhap(b, k);
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
