#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int d = 0, i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			d = d + 1;
		i = i + 1;
	}
	if (d == 2)
		cout << "La so  nguyen to";
	else
		cout << "Khong la so nguyen to";
	return 1;
}
