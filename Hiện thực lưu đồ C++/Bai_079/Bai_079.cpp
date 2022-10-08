#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int s = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		s = s + i * T;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}