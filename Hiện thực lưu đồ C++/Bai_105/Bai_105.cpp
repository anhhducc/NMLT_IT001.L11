#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 0;
	int M = 0;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		M = M + i;
		e = (float)1 / M;
		s = s + (float)1 / M;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}