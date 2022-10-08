#include <iostream>
#include <cmath>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "\nNhap n: ";
	cin >> n;
	cout << "\nSo hang thu " << n << " cua 2 day la: "; cout << endl;
	int kq1 = TinhAn(n); cout << kq1; cout << endl;
	int kq2 = TinhBn(n); cout << kq2;
	
	return 1;
}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (x * x + 2 * y * y);
}

int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return 2*x*y;
}
