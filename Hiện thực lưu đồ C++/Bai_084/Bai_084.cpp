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
	int i = 1;
	float T = x;
	while (i <= n)
	{
		T = sin(T);
		s = s + T;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}