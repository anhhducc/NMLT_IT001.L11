#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "Hang so Euler e= " << kq;
	return 1;
}
float Tong()
{
	float S = 2;
	int M = 1;
	float e = 1;
	for (int i = 2; e >= pow(10, -6); i = i + 1)
	{
		M = M * i;
		e = (float)1 / M;
		S = S + e;
	}
	return S;
}