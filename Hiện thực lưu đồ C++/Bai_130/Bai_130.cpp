#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float y;
	cout << "Nhap y= ";
	cin >> y;
	float z;
	cout << "Nhap z= ";
	cin >> z;
	float a = abs(x), b = abs(y), c = abs(z);
	if (a < b + c && abs(b - c) < a)
		cout << "Ton tai";
	else
		cout << "Khong ton tai";
	return 0;
}

