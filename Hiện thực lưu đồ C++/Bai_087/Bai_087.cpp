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
	float s = x;
	float T = x;
	int i = 1;
	float dau = -1;
	while (i <= n)
	{
		T = T * x * x;
		s = s + dau * T;
		dau = -dau;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}