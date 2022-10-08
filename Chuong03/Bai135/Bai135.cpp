#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(float[], int&, float[]);
void Xuat(float[], int, float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[100], b[100];
	int k, n;
	Nhap(a, n, b);
	XayDung(a, n, b, k);
	Xuat(a, n, b, k);
	return 1;
}

void Nhap(float a[], int& n, float b[])
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
	}
}
void Xuat(float a[], int n, float b[], int k)
{
	cout << endl;
	cout << "Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(11) << setprecision(3) << fixed << a[i];
	}
	cout << endl;
	cout << "Mang b: ";
	for (int i = 0; i < k; i++)
	{
		cout << setw(11) << setprecision(3) << fixed << b[i];
	}
	cout << endl;
}
void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 1)
	{
		k = 1;
		b[0] = 0;
		return;
	}
	k = n;
	b[0] = a[1];
	for (int i = 1; i <= n - 2; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[k - 1] = a[n - 2];
}