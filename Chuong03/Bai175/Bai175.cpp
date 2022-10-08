#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nTat ca cac mang con: " << endl;
	XuatCon(b, k);
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

void XuatCon(int a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			for (int i = 0; i < l; i++)
				cout << a[vt + i] << "   ";
			cout << endl;
		}
	}
}
