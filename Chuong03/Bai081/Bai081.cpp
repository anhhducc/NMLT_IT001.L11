#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float DauTien(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nGia tri dau tien > 2003: ";
	float kq = DauTien(b, k);
	cout << kq;
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -10000 + rand() / (RAND_MAX / (10000.0 - (-10000.0)));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

float DauTien(float a[], int n)
{
	for (int i=0; i<n;i++)
		if (a[i] > 2003)
		{
			float lc = a[i];
			return lc;
		}
	return 0;
}