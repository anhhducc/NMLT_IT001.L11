#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TongGT(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nTong cac gia tri co chu so dau la so le: " << TongGT(b, k);
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

int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}

int TongGT(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGT(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		s = s + a[n - 1];
	return s;
}
