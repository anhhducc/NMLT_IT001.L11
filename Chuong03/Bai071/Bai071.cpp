#include <cstdlib>
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int[], int, int[], int);

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
	cout << "\nSo lan xuat hien cua mang a trong mang b la: " << DemXuatHien(a, k, b, l);
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

int DemXuatHien(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}