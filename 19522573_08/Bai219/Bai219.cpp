#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);
void Nhap(DIEM&);
void Xuat(DUONGTRON);
void Xuat(DUONGTRON[], int);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);
void LietKe(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nLiet kek tat ca cac cap duong tron tiep xuc nhau: ";
	LietKe(b, k);
	Xuat(b, k);
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << endl;
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R << endl;
}


void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong tron a[" << i << "]:";
		Xuat(a[i]);
	}

}

float KhoangCach(DIEM M, DIEM N)
{
	float kc = sqrt((N.x - M.x) * (N.x - M.x) + (N.y - M.y) * (N.y - M.y));
	return kc;
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc<(c1.R + c2.R) && kc>abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}

void LietKe(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = 0; j < n; j++)
			if (TuongDoi(a[i], a[j]) == 2 || TuongDoi(a[i], a[j]) == 4)
			{
				Xuat(a[i]);
				Xuat(a[j]);
			}
}
