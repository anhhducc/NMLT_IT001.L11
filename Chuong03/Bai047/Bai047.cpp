#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(float[], int&, float&);
void Xuat(float[], int);
float TongGiaTri(float[], int, float);
int DemGiaTri(float[], int, float);
float TrungBinhCong(float[], int, float);

int main()
{
	float b[100];
	int k;
	float y;
	Nhap(b, k, y);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nTrung binh cong cac gia tri lon hon x= " << TrungBinhCong(b, k, y);
	return 1;
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << setprecision(3) << a[i];
	}
}

float TongGiaTri(float a[], int n, float x)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			s = s + a[i];
	return s;
}

int DemGiaTri(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			dem++;
	return dem;
}

float TrungBinhCong(float a[], int n, float x)
{
	float s = TongGiaTri(a, n, x);
	int dem = DemGiaTri(a, n, x);
	if (dem == 0)
		return 0;
	return s / dem;
}