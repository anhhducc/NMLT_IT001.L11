#include<iostream>
#include<cmath>
using namespace std;
float Tong(float x);
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float kq = Tong(x);
	cout << "e^"<<x<<"= " << kq;
	return 1;
}
float Tong(float x)
{
	float S = 1+x;
	int M = 1;
	float T = x;
	float e = 1;
	for (int i = 1; e >= pow(10, -6); i = i + 1)
	{
		M = M * (i + 1);
		T = T * x;
		e = (float)1 / M;
		S = S + (float)T / M;
	}
	return S;
}