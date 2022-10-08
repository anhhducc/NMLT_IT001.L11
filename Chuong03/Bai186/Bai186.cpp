#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int, int);
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int&, int&);

int main()
{
	int k, l, M;
	int vtd = 0;
	int b[100];
	Nhap(b, k);
	int vtc = k - 1;
	cout << "Mang ban dau: " << endl;
	Xuat(b, k, 0);
	cout << endl;
	cout << "Nhap so nguyen M: ";
	cin >> M;
	cout << "Mang con co tong cac phan tu bang " << M << " la: " << endl;
	TimCon(b, k, M, vtd, vtc);
	Xuat(b, vtc + 1, vtd);
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100;
}

void Xuat(int a[], int n, int f)
{
	for (int i = f; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s += a[vt + i];
	return s;
}

void TimCon(int a[], int n, int M, int& vtd, int& vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - 1; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}

