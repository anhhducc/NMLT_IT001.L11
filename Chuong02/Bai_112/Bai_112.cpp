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
	float S = 4 - 2 / 4 - 1 / 5 - 1 / 6;
	float e = 1;
	int T = 1;
	for (int i = 1; e >= pow(10, -6); i = i + 1)
	{
		T = T * 16;
		e = (float)(4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6)) / T;
		S = S + e;
	}
	return S;
}