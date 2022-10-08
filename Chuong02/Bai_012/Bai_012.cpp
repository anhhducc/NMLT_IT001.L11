#include <iostream>
#include <cmath>
using namespace std;
int LuyThua(int);

int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	cout << x<<"^6= " << LuyThua(x);
	return 0;
}
int LuyThua(int x)
{
	float x2 = x * x;
	float x3 = x2 * x;
	float x6 = x3 * x3;
	return x6;
}