#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float s = 2, e = 1;
	int M = 1, i = 2;
	while (e >= pow(10, -6))
	{
		M = M + i;
		e = (float)1 / M;
		s = s + (float)1 / M;
		i = i + 1;
	}
	cout <<"Hang so Euler e voi dcx 10^-6 = " << s;
	return 1;
}