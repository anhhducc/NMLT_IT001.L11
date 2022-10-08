#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	long s = 0;
	long t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}