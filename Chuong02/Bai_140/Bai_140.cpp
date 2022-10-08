#include<iostream>
#include<cmath>
using namespace std;
void GiaiPhuongTrinh(float, float, float);

int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;

	GiaiPhuongTrinh(a, b, c);

	return 1;
}

void GiaiPhuongTrinh(float a, float b, float c)
{
	float delta = b * b - 4 * a * c;
	if (delta != 0)
		if (delta > 0)
		{
			float x1 = (-b - sqrt(delta)) / (2 * a);
			float x2 = (-b + sqrt(delta)) / (2 * a);
			cout <<"Phuong trinh co 2 nghiem x1="<< x1 <<"  x2="<< x2;
		}
		else
			cout << "Vo nghiem";
	else
	{
		float x = -b / (2 * a);
		cout <<"Phuong trinh co nghiem kep x0= "<< x;
	}
}