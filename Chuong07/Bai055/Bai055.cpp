#include <iostream>
#include <cmath>
using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "\nNhap n: ";
	cin >> n;
	cout << "\nSo hang thu " << n << " cua day la: " << Tinh(n);
	return 1;
}

int Tinh(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	int x = Tinh(n - 1);
	int y = Tinh(n - 2);
	return (4 * x + y);
}
