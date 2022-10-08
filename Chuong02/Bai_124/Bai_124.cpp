#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq1 = TinhAn(n);
	int kq2 = TinhBn(n);

	cout << "So hang thu " << n << " cua day la: " << kq1 << "  " << kq2;
	return 1;
}
int TinhAn(int k)
{
	int at = 2, bt = 1, ahh = 0, bhh = 0;

	for (int i = 2; i <= k; i = i + 1)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}
int TinhBn(int k)
{
	int at = 2, bt = 1, ahh = 0, bhh = 0;
	for (int i = 2; i <= k; i = i + 1)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}