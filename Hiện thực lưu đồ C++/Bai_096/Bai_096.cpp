#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float s = 0;
	float gt = 1;
	float i = 0;
	while (i <= (n-1))
	{
		gt = gt * (i + 1);
		s = sqrt(gt + s);
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}