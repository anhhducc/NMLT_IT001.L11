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
	float s = -1;
	int dau = 1;
	float T = 1;
	int M = 1;
	int i = 2;
	while (i <= 2*n)
	{
		M = M * (i - 1) * i;
		T = T * x * x;
		s = s + (float)dau * (T / M);
		dau = -dau;
		i = i + 2;
	}
	cout << "Tong la: " << s;
	return 1;
}