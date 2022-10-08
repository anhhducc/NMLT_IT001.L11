#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float s = 0;
	float T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		s = pow(T + s, (float)1 / (i + 1));
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 1;
}