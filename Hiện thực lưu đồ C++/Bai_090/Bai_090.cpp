#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float s = 0;
	int dau = -1;
	float T = 1;
	int M = 1;
	int i = 1;
	while (i <= n)
	{
		M = M * i;
		T = T * x;
		s = s + (float)dau * (T / M);
		dau = -dau;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}