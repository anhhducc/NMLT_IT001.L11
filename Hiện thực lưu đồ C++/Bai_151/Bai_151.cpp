#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int flag = 1, t = n, du;
	while (t > 1)
	{
		du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << "Co dang 2^m";
	else
		cout << "Khong co dang 2^m";
	return 1;
}