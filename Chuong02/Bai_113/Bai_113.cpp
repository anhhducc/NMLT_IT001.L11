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
	int at = 2, ahh;
	for (int i = 2; i <= n; i = i + 1)
	{
		ahh = at + 2 * i + 1;
		at = ahh;
	}
	return ahh;
}