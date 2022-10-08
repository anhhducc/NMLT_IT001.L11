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
	int att = -1, at = 3, T = 2, ahh;
	for (int i = 2; i <= n; i = i + 1)
	{
		T = T * 2;
		ahh = 5 * T + 5 * at - att;
		att = at;
		at = ahh;
	}
	return ahh;
}