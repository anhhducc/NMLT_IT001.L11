#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "pi= " << kq;
	return 1;
}
float Tong()
{
	float S = 4;
	int M = 1;
	float e = 1;
	int dau = -1;
	for (int i = 2; e >= pow(10, -6); i = i + 1)
	{
		M = M + 2;
		e = (float)4 / M;
		S = S + (float)dau*e;
		dau = -dau;
	}
	return S;
}