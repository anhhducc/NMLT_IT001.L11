#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float[]);
void Xuat(float[], int, float[]);
int TanSuat(float[], int, float);
int ktThuoc(float[], int, float[], int);
int main()
{
	float a[100], b[100];
	int k, m = 0;
	Nhap(a, k, b);
	cout << "\nMang ban dau: ";
	Xuat(a, k, b);
	cout << "\nCac phan tu mang a co thuoc mang b ?: " << ktThuoc(a, k, b, m);

	return 1;
}

void Nhap(float a[], int& n, float b[])
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + (float)rand() / (RAND_MAX / 200);
		b[i] = -100 + (float)rand() / (RAND_MAX / 200);
	}
}
void Xuat(float a[], int n, float b[])
{
	cout << endl;
	cout << "Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(2) << fixed << a[i];
	}
	cout << endl;
	cout << "Mang b: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(2) << fixed << b[i];
	}
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
int ktThuoc(float a[], int n, float b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}