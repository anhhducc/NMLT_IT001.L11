#include <iostream>
#include <cmath>
using namespace std;
float DienTich(float r);

int main()
{
	float r;
	cout << "Nhap ban kinh r= ";
	cin >> r;
	cout << "Dien tich duong tron= " << DienTich(r);
	return 0;
}
float DienTich(float r)
{
	float s = 3.14 * r * r;
	return s;
}