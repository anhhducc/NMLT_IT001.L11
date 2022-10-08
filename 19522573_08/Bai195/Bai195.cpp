#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM[], int&);
void Nhap(DIEM&);
void Xuat(DIEM[], int);
void Xuat(DIEM);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[], int, DIEM);
int DemDiemKhongTrung(DIEM[], int);


int main()
{
	DIEM a[100];
	int n;

	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo luong phan tu khong trung voi phan tu khac: " << DemDiemKhongTrung(a, n);
	return 1;

}

void Nhap(DIEM& a)
{
	cout << "Nhap x: "; cin >> a.x;
	cout << "Nhap y: "; cin >> a.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

void Xuat(DIEM a)
{
	cout << "\nx=" << a.x;
	cout << "\ny=" << a.y;
	cout << endl;
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nToa do diem a[" << i << "]: ";
		Xuat(a[i]);
	}
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

int TanSuat(DIEM a[], int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktTrung(a[i], P) == 1)
			dem++;
	return dem;
}

int DemDiemKhongTrung(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	return dem;
}