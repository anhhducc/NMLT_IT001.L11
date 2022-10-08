#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a;
	cout << "Nhap a= ";
	cin >> a;
	float b;
	cout << "Nhap b= ";
	cin >> b;
	float c;
	cout << "Nhap c= ";
	cin >> c;
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		float temp = b;
		b = c;
		c = temp;
	}
	cout << a << " " << b << " " << c;
	return 1;
}