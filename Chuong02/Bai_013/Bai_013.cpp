#include <iostream>
#include <cmath>
using namespace std;
int LuyThua(int);

int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	cout << x << "^7= " << LuyThua(x);
	return 0;
}
int LuyThua(int x)
{
	float x2 = x * x;
	float x3 = x2 * x;
	float x4 = x2 * x2;
	float x7 = x3 * x4;
	return x7;
}