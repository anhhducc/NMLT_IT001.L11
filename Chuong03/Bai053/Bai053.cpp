#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

void Nhap(float[], int&, float&);
void Xuat(float[], int);
int TanSuat(float[], int, float);

int main()
{
	float b[100];
	float y;
	int k;
	Nhap(b, k, y);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nSo lan xuat hien cua " << y << " la: " << TanSuat(b, k, y);
	return 1;
}

void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap gia tri x: ";
	cin >> x;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(7) << setprecision(3) << a[i];
	cout << endl;
}

int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}




