#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int HoanThienDau(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int kq = TimGiaTri(b, k);
	cout << "\nSo hoan thien nho nhat: " << kq;
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

bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return true;
	return false;
}

int HoanThienDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1)
			return a[i];
	return -1;
}

int TimGiaTri(int a[], int n)
{
	int lc = HoanThienDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1 && a[i] < lc)
			lc = a[i];
	return lc;
}
