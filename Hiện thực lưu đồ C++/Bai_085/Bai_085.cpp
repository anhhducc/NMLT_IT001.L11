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
	float T = 1;
	int i = 1;
	float dau = 1;
	while (i <= n)
	{
		T = T * x;
		s = s + dau * T;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la: " << s;
	return 1;
}