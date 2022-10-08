#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(float[], int&, float[]);
void Xuat(float[], int, float[]);
void HoanVi(float&, float&);
void SapTang(float[], int);
int ktHoanVi(float[], int, float[], int);

int main()
{
	float a[100], b[100];
	int  n, m = 0;
	Nhap(a, n, b);
	Xuat(a, n, b);
	cout << "Check mang b co phai la hoan vi cua mang a? " << ktHoanVi(a, n, b, m);
	return 1;
}

void Nhap(float a[], int& n, float b[])
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + (float)rand() / (RAND_MAX / 200.0);
		b[i] = -100 + (float)rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n, float b[])
{
	cout << endl;
	cout << "Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(11) << setprecision(3) << fixed << a[i];
	}
	cout << endl;
	cout << "Mang b: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(11) << setprecision(3) << fixed << b[i];
	}
}
void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;

}
void SapTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}
int ktHoanVi(float a[], int n, float b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(b, m);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}