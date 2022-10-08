#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktChinhPhuong(int);
int CPDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nSo chinh phuong dau tien: " << CPDau(b, k);
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

bool ktChinhPhuong(int n)
{
	bool a = false;
	for (int i = 1; (i * i) <= n; i++)
		if ((i * i) == n)
			a = true;
	return a;
}

int CPDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = CPDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktChinhPhuong(a[n - 1]))
		return a[n - 1];
	return -1;
}
