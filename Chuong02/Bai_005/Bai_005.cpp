#include <iostream>
#include <cmath>
using namespace std;
float TheTich(float r);

int main()
{
	float r;
	cout << "Nhap ban kinh r= ";
	cin >> r;
	cout << "The tich hinh cau la= " << TheTich(r);
	return 0;
}
float TheTich(float r)
{
	float v = (float)(4 * 3.14 * pow(r, 3)) / 3;
	return v;
}