#include<iostream>
#include<cmath>
using namespace std;
int bcnn(int, int);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int kq = bcnn(a, b);
	cout << "BCNN la: " << kq;
	return 1;
}

int bcnn(int x, int y)
{
	x = abs(x);
	y = abs(y);
	while (x * y != 0)
		if (x > y)
			x = x - y;
		else
			y = y - x;
	int bcnn = abs(x * y) / (x + y);
	return bcnn;
}