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
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
}
void Xuat(float a[], int n, float b[], int k)
{
	cout << endl;
	cout << "Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << setprecision(3) << fixed << a[i];
	}
	cout << endl;
	cout << "Mang b: ";
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}
void XayDung(float a[], int n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
		{
			b[k++] = a[i];
		}
}