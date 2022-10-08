#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void HoanVi(float&, float&);
void DuongTangAmGiam(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nSap xep so duong tang dan, so am giam dan: " << endl;
	DuongTangAmGiam(b, k);
	Xuat(b, k);
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

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void DuongTangAmGiam(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
		if (a[i] < 0 && a[n - 1] < 0 && a[i] < a[n - 1])
			HoanVi(a[i], a[n - 1]);
	}
	DuongTangAmGiam(a, n - 1);
}