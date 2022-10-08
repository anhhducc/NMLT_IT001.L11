
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(int[], int&, int[]);
void Xuat(int[], int, int[], int, int[]);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int a[100], b[100], c[100];
	int  n, m = 0, p;
	Nhap(a, n, b);
	Xuat(a, n, b, m, c);
	cout << "\nMang duoc tron la: ";
	Tron(a, n, b, m, c, p);
	Xuat(a, n, b, m, c);
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
		b[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n, int b[], int m, int c[])
{
	cout << endl;
	cout << "Mang a: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << a[i];
	}
	cout << endl;
	cout << "Mang b: ";
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << b[i];
	}
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];

	}
}