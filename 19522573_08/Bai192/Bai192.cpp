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
DIEM TungMax(DIEM[], int);


int main()
{
	DIEM a[100];
	int n;

	Nhap(a, n);
	Xuat(a, n);
	cout << "\nTim diem co tung do lon nhat: "; 
	Xuat(TungMax(a, n));
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

DIEM TungMax(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].y > lc.y)
			lc = a[i];
	return lc;
}
