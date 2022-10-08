#include <iostream>
#include <cmath>
using namespace std;
float LuyThua(float);

int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	cout << x << "^32= " << LuyThua(x);
	return 0;
}
float LuyThua(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x32 = x16 * x16;
	return x32;
}