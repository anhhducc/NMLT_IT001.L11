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


int main()
{
	DIEM a[100];
	int n;

	Nhap(a, n);
	Xuat(a, n);
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
