#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int d = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			d = d + 1;
		i = i + 2;
	}
	cout << "So luong cac uoc so chan cua " << n << " la: " << d;
	return 1;
}