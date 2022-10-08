
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[], int&, int[]);
void Xuat(int[], int, int[], int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100], b[100];
	int k, n;
	Nhap(a, n, b);
	XayDung(a, n, b, k);
	Xuat(a, n, b, k);
	return 1;
}

void Nhap(int a[], int& n, int b[])
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n, int b[], int k)
{
	cout << endl;
	cout << "Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << a[i];
	}
	cout << endl;
	cout << "Mang b (chua cac gia tri le): ";
	for (int i = 0; i < k; i++)
	{
		cout << setw(7) << b[i];
	}
	cout << endl;
}
void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			k++;
		}
}