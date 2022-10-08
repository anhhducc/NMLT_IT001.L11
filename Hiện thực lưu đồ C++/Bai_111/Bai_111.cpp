#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 3, e = 1, dau = 1;
	int M = 0;
	while (e >= pow(10, -6))
	{
		M = M + 2;
		e = (float)4 / (M * (M + 1) * (M + 2));
		s = s + dau * e;
		dau = -dau;
	}
	cout << "Pi voi dcx 10^-6 theo chuoi vo han Nilakantha = " << s;
	return 1;
}