#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float  at = 2, i = 2, ahh;
	while (i <= n)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		at = ahh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 1;
}