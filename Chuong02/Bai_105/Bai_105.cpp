#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "Tong= " << kq;
	return 1;
}
float Tong()
{
	float S = 0;
	int M = 0;
	float e = 1;
	for (int i = 1; e >= pow(10, -6); i = i + 1)
	{
		M = M + i;
		e = (float)1 / M;
		S = S + e;
	}
	return S;
}