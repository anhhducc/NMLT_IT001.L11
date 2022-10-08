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
		du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "Co dang 3^m";
	else
		cout << "Khong co dang 3^m";
	return 1;
}