#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, UCLN;
	cout << "Nhap a= ";
	cin >> a;
	cout << "Nhap b= ";
	cin >> b;
	int m = abs(a), n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			n = n - m;
		else
			m = m - n;
	}
	UCLN = m + n;
	cout << "UCLN la: " << UCLN;
	return 1;
}