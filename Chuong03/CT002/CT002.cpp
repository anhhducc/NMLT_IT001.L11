#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongAm(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nDay so ban dau la: ";
	Xuat(b, k);
	cout << "\nTong cac so am trong day so am la: ";
	float kq = TongAm(b, k);
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
	for (int i =0  ;i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

float TongAm(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			s = s + a[i];
	return s;
}
