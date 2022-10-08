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
	long t = x;
	long s = x;
	int i = 3;
	while (i <= 2 * n + 1 )
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "Tong la: " << s;
	return 1;
}
