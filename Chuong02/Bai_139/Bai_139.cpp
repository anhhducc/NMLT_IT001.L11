#include<iostream>
#include<cmath>
using namespace std;
void GiaiPhuongTrinh(float, float);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	GiaiPhuongTrinh(a, b);

	return 1;
}

void GiaiPhuongTrinh(float a, float b)
{
	float x;
	if (a == 0)
		if (b == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	else
	{
		x = -b / a;
		cout <<"Phuong trinh co nghiem x= "<<x;
	}
}