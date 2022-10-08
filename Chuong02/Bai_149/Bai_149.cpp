#include<iostream>
#include<cmath>
using namespace std;
int ucln(int, int);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int kq = ucln(a, b);
	cout <<"UCLN la: "<< kq;
	return 1;
}

int ucln(int x, int y)
{
	x = abs(x);
	y = abs(y);
	while (x * y != 0)
		if (x > y)
			x = x - y;
		else
			y = y - x;
	int ucln = x + y;
	return ucln;
}