#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float CuoiCung(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nGia tri am cuoi cung > -1: ";
	float kq = CuoiCung(b, k);
	cout << kq;
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

float CuoiCung(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i]<0 && a[i]>-1)
			return a[i];
	return 0;
}
