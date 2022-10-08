#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, BCNN;
	cout << "Nhap a= ";
	cin >> a;
	cout << "Nhap b= ";
	cin >> b;
	int m = abs(a), n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	BCNN = abs(a * b) / (m + n);
	cout << "BCNN la: " << BCNN;
	return 1;
}