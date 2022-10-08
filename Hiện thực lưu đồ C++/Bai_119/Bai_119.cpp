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
		ahh = (float)(at * at + 2) / (2 * at);
		at = ahh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 1;
}