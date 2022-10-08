#include <iostream>
#include <cmath>
using namespace std;
void XuatTang(float&, float&);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	XuatTang(a, b);
	cout << "Thu tu tang dan la: " << a << "  " << b;

	return 1;
}
void XuatTang(float& a, float& b)
{
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
}
