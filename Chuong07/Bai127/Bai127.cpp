#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktDoiXung(int[], int);
int DoiXungDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nGia tri doi xung dau tien trong mang: " << DoiXungDau(b, k);
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

bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (dn == n)
		return true;
	return false;
}

int DoiXungDau(int a[], int n)
{
	if (n == 0)
		return 10;
	int lc = DoiXungDau(a, n - 1);
	if (lc != 10)
		return lc;
	if (ktDoiXung(a[n - 1]))
		return a[n - 1];
	return 10;
}
