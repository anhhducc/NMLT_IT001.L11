#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float s = 0;
	int M = 0;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		M = M + i;
		s = s + (float)dau / M;
		dau = - dau;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}