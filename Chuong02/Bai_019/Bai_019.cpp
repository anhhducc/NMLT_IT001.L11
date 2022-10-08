#include <iostream>
#include <cmath>
using namespace std;
float LuyThua(float);

int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	cout << x << "^13= " << LuyThua(x);
	return 0;
}
float LuyThua(float x)
{
	float x3 = x * x * x;
	float x6 = x3 * x3;
	float x9 = x3 * x6;
	float x13 = x9 * x3 * x;
	return x13;
}