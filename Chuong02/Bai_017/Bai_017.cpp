#include <iostream>
#include <cmath>
using namespace std;
float LuyThua(float);

int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	cout << x << "^11= " << LuyThua(x);
	return 0;
}
float LuyThua(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x11 = (x6 * x6) / x;
	return x11;
}