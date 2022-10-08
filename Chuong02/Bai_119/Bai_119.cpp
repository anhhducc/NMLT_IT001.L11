#include <iostream>
#include <cmath>
using namespace std;
float TinhAn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = TinhAn(n);

	cout << "So hang thu " << n << " cua day la: " << kq;
	return 1;
}
float TinhAn(int n)
{
	float  at = 2, ahh;
	for (int i = 2; i <= n; i = i + 1)
	{
		ahh = (at * at + 2) / (2 * at);
		at = ahh;
	}
	return ahh;
}