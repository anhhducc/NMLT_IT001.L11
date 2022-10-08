#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO);
void Xuat(PHANSO[], int);


int main()
{
	PHANSO b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau : ";
	Xuat(b, k);
	return 1;
}

void Nhap(PHANSO& P)
{
	cout << "Tu: ";
	cin >> P.tu;
	cout << "Mau: ";
	cin >> P.mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

void Xuat(PHANSO P)
{
	cout << P.tu << "/" << P.mau <<setw(5);
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
