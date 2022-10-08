#include<iostream>
#include<cmath>
using namespace std;
float Tong(float, int);
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float kq = Tong(x, n);
	cout << "Tong= " << kq;
	return 1;
}
float Tong(float y, int k)
{
	float T = y, S = 1 - y;
	int dau = 1, M = 1;
	for (int i = 2; i <= 2 * k + 1; i = i + 2)
	{
		M = M * i * (i + 1);
		T = T * y * y;
		S = S + (float)dau * (T / M);
		dau = -dau;
	}
	return S;
}