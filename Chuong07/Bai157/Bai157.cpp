#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float b[100];
	int k, n;
	float a[100];
	Nhap(b, k);
	cout << "\nMang ban dau a: " << endl;
	Xuat(b, k);
	cout << "\nMang b chi chua gia tri am: " << endl;
	XayDung(b, k, a, n);
	Xuat(a, n);
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

void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (a[n - 1] < 0)
		b[k++] = a[n - 1];
}