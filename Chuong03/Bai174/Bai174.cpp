#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(int[], int&, int&);
void Xuat(int[], int, int);
void XuatCon(int[], int, int);

int main()
{
	int b[100];
	int k;
	int l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "\nTat ca cac mang con co do dai l la: " << endl;
	XuatCon(b, k, l);
	return 1;
}

void Nhap(int a[], int& n, int& l)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap l: ";
	cin >> l;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200 + 1) - 100;
	}
}
void Xuat(int a[], int n, int l)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

void XuatCon(int a[], int n, int l)
{
	for (int vt = 0; vt <= n - l; vt++)
	{
		for (int i = 0; i < l; i++)
			cout << setw(4) << a[vt + i];
		cout << endl;
	}
}