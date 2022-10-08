#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = TinhAn(n);

	cout << "So hang thu " << n << " cua day la: " << kq;
	return 1;
}
int TinhAn(int n)
{
	int at = -2, T = 3, P = 7, ahh;
	for (int i = 2; i <= n; i = i + 1)
	{
		T = T * 3;
		P = P * 7;
		ahh = 5 * at + 2 * T - 6 * P + 12;
		at = ahh;
	}
	return ahh;
}