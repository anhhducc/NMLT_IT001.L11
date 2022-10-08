#include <iostream>
#include <cmath>
using namespace std;
void XuatTang(float&, float&, float&);

int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;

	XuatTang(a, b, c);
	cout << "Thu tu tang dan la: " << a << "  " << b << "  " << c;

	return 1;
}
void XuatTang(float& a, float& b, float& c)
{
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
}
