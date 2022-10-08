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

	cout << "So hang thu "<<n<<" cua day la: " << kq1 << "  " << kq2;
	return 1;
}
int TinhAn(int k)
{
	int at = 1, bt = 1, ahh = 0, bhh = 0;
	
	for (int i = 2; i <= k; i = i + 1)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}
int TinhBn(int k)
{
	int at = 1, bt = 1, ahh = 0, bhh = 0;
	for (int i = 2; i <= k; i = i + 1)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}