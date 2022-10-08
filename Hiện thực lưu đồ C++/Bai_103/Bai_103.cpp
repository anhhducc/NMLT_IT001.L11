#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 1;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / (2 * i + 1);
		s = s + e;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}