#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int att = -1, at = 3, T = 2, i = 2, ahh;
	while (i <= n)
	{
		T = T * 2;
		ahh = 5 * T + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "So hang thu " << n << " la: " << ahh;
	return 1;
}