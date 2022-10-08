#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float s = 1 + x, T = x, e = 1;
	int M = 1, i = 1;
	while (e >= pow(10, -6))
	{
		T = T * x;
		M = M * (i + 1);
		e = (float)1 / M;
		s = s + (float)T / M;
		i = i + 1;
	}
	cout << "e^"<<x<<" voi dcx 10^-6 = " << s;
	return 1;
}