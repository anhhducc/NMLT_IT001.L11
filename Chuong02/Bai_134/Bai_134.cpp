#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&);
float ktBatDangThuc(float&, float&, float&);

int main()
{
	float x, y, z;
	Nhap(x, y, z);
	ktBatDangThuc(x, y, z);
	if (ktBatDangThuc(x, y, z))
		cout << "Bat dang thuc dung";
	else
		cout << "Bat dang thuc sai";
	return 1;
}
void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}
float ktBatDangThuc(float& x, float& y, float& z)
{
	if (x <= y && y <= z)
		return 1;
	else
		return 0;
}

