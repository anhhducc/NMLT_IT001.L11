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
	float s = 1 / x;
	float M = x;
	int i = 1;
	while (i <= n)
	{
		M = M * (x + i);
		s = s + (float)1 / M;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}