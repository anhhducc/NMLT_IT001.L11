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
	cout << "sin(x)= " << kq;
	return 1;
}
float Tong(float x)
{
	float S = x;
	int M = 1;
	int dau = -1;
	float T = 1;
	float e = 1;
	for (int i = 2; e >= pow(10, -6); i = i + 2)
	{
		M = M * i * (i + 1);
		T = T * x * x;
		e = (float)1 / M;
		S = S + (float)dau*T/M;
		dau = -dau;
	}
	return S;
}