#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Xuat2(int[], int, int, int);
int ktCon(int[], int, int, int);
void DuongDaiNhat(int[], int, int&, int&);

int main()
{
	int b[100];
	int k, x, y;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	DuongDaiNhat(b, k, x, y);
	Xuat2(b, k, x, y);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}
void DuongDaiNhat(int a[], int n, int& vtd, int& vtc)
{
	cout << "\nDay con toan duong dai nhat: ";
	for (int l = n; l >= 1; l--)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}
void Xuat2(int a[], int n, int vtd, int vtc)
{
	for (int i = vtd; i <= vtc; i++)
		cout << setw(6) << a[i];
}