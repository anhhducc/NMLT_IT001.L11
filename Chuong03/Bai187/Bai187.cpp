#include <cstdlib>
#include <iostream>
#include <ctime>
#include<cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int, int);
int ViTriDuongDau(float[], int);
float TongCon(float[], int, int, int);
int ktCon(float[], int, int, int);
void DuongLonNhat(float[], int, int&, int&);

int main()
{
	float b[100];
	int k;
	int vtd, vtc;
	Nhap(b, k);
	Xuat(b, k, 0);
	cout << "\nDay con toan duong co tong lon nhat: ";
	DuongLonNhat(b, k, vtd, vtc);
	Xuat(b, vtd, vtc);
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + (rand() / (RAND_MAX / (200.0)));
}

void Xuat(float a[], int n, int f)
{
	cout << "\nMang ban dau:";
	for (int i = n; i < f - 1; i++)
	{
		cout << setw(6) << setprecision(3) << a[i];
	}
}

float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i <= l - 1; i++)
		s = s + a[vt + i];
	return s;
}

int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i < l; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}

int ViTriDuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}

void DuongLonNhat(float a[], int n, int& vtd, int& vtc)
{
	int vt = ViTriDuongDau(a, n);
	if (vt == -1)
	{
		vtd = vtc = -1;
		return;
	}
	float smax = a[vt];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt < n; vt++)
			if (ktCon(a, n, vt, l) == 1 && TongCon(a, n, vt, l) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = TongCon(a, n, vt, l);
			}
	cout << endl << vtd << setw(6) << vtc;
}