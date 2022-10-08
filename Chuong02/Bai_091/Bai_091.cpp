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
	float T = 1, S = -1;
	int dau = 1, M = 1;
	for (int i = 2; i <= 2 * k; i = i + 2)
	{
		M = M * (i - 1) * i;
		T = T * y * y;
		S = S + (float)dau * (T / M);
		dau = -dau;
	}
	return S;
}