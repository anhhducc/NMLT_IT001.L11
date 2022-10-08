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
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	cout << a<<" " << b;
	return 1;
}