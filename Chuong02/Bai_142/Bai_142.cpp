#include<iostream>
#include<cmath>
using namespace std;
int DaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = DaoNguoc(n);

	cout << kq;
	return 1;
}

int DaoNguoc(int k)
{
	int t = abs(k);
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}