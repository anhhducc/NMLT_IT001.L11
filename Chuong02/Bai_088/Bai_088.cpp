#include<iostream>
#include<cmath>
using namespace std;
float Tong(float);
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float kq = Tong(n);
	cout << "Tong= " << kq;
	return 1;
}
float Tong(float k)
{
	float S = 0;
	int M = 0, dau = 1;
	for (int i = 1; i <= k; i = i + 1)
	{
		M = M + i;
		S = S + (float)dau / M;
		dau = -dau;
	}
	return S;
}