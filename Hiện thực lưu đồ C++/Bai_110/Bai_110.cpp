#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 4, e = 1, dau = -1;
	int M = 1;
	while (e >= pow(10, -6))
	{
		M = M + 2;
		e = (float)4 / M;
		s = s + dau * e;
		dau = -dau;
	}
	cout << "Pi voi dcx 10^-6 = " << s;
	return 1;
}