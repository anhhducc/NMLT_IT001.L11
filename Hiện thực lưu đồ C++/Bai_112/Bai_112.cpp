#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 4 - 2 / 4 - 1 / 5 - 1 / 6, e = 1;
	float i = 1, T = 1;
	while (e >= pow(10, -6))
	{
		T = T * 16;
		e = (float)(4 / (8*i + 1) - 2 / (8*i + 4) - 1 / (8*i + 5) - 1 / (8*i + 6)) / T;
		s = s + e;
		i = i + 1;
	}
	cout << "Pi voi dcx 10^-6 theo thuat toan BaileyBorwein-Plouffe = " << s;
	return 1;
}