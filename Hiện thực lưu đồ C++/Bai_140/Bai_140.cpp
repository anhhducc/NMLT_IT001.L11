#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, x, delta, x0, x1, x2;
	cout << "Nhap a= ";
	cin >> a;
	cout << "Nhap b= ";
	cin >> b;
	cout << "Nhap c= ";
	cin >> c;
	delta = b * b - 4 * a * c;
	if (delta <= 0)
		if (delta == 0)
		{
			x0 = -b / (2 * a);
			cout << "Pt co nghiem kep x0= " << x0;
		}
		else
			cout << "Vo nghiem";
	else
			x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1= " << x1 << "  " << "x2= " << x2;
	return 1;
}

