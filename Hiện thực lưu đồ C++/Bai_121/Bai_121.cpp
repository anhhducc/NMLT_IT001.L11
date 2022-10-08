#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int  ftt = 1, ft = 1, i = 2, fhh;
	while (i <= n)
	{
		fhh = ft + ftt;
		ftt = ft;
		ft = fhh;
		i = i + 1;
	}
	cout << "So hang thu " << n << " cua day Fibonacci la: " << fhh;
	return 1;
}