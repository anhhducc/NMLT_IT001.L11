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
float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int);


int main()
{
	DIEM a[100];
	int n;

	Nhap(a, n);
	Xuat(a, n);
	cout << "\nTim toa do 2 diem gan nhau nhat: "; 
	GanNhauNhat(a, n);
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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

void GanNhauNhat(DIEM a[], int n)
{
	DIEM P = a[0];
	DIEM Q = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j < n; j++)

			if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
			{
				P = a[i];
				Q = a[j];
			}
	cout << "\nDiem 1: ";
	Xuat(P); cout << endl;
	cout << "Diem 2: ";
	Xuat(Q);
}
