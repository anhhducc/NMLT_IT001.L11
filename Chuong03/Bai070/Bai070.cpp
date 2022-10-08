#include <cstdlib>
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int a[100];
	int b[100];
	int k, l;
	Nhap(a, k);
	cout << "Mang a: " << endl;
	Xuat(a, k);
	cout << endl;
	Nhap(b, l);
	cout << "Mang b: " << endl;
	Xuat(b, l);
	cout << endl;
	cout << "\nCac gia tri chi xuat hien 1 trong 2 mang: " << endl;
	LietKe(a, k, b, l);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << a[i] << "   ";
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j < i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << b[i] << "   ";
	}
}

