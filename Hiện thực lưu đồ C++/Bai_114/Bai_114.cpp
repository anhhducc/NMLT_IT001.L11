#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int at = -2, T = 3, P = 7, i = 2, ahh;
	while (i <= n)
	{
		T = T * 3;
		P = P * 7;
		ahh = 5 * at + 2 * T - 6 * P + 12;
		i = i + 1;
		at = ahh;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 1;
}