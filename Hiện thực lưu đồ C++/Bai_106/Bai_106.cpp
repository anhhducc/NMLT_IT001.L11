#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float s = x, T = 1, e = 1;
	int M = 1, dau = -1, i = 2;
	while (e >= pow(10, -6))
	{
		T = T * x * x;
		M = M * i * (i + 1);
		e = (float)1 / M;
		s = s + (float)dau * T / M;
		dau = -dau;
		i = i + 2;
	}
	cout << "sin(x) voi dcx 10^-6 = " << s;
	return 1;
}