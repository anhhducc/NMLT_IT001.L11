#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 0;
	int i = 2;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	cout << "Tong la: " << s;
	return 1;
}