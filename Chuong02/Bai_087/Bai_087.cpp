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
	float T = y, S = y;
	int dau = -1;
	for (int i = 1; i <= k; i = i + 1)
	{
		T = T * y * y;
		S = S + dau * T;
		dau = -dau;
	}
	return S;
}