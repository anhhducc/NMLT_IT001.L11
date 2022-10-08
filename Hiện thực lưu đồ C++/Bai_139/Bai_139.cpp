#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, x;
	cout << "Nhap a= ";
	cin >> a;
	cout << "Nhap b= ";
	cin >> b;
	if (a == 0)
		if (b == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	else
		x = -b / a;
	cout << "Phuong trinh co nghiem x= " << x;
	return 1;
}