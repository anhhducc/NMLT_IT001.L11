#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1, y1;
	cout << "Nhap A(x1,y1)= ";
	cin >> x1 >> y1;
	float x2, y2;
	cout << "Nhap B(x2,y2)= ";
	cin >> x2 >> y2;
	float x3, y3;
	cout << "Nhap C(x3,y3)= ";
	cin >> x3 >> y3;
	float AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float cv = AB + BC + AC;
	cout << "Chu vi= " << cv;
	return 1;
}