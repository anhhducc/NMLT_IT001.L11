#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x= ";
	cin >> x;
	int y;
	cout << "Nhap y= ";
	cin >> y;
	int i = x;
	while (i <= y)
	{
		int a = i % 4, b = i % 100, c = i % 400;
		if ((a == 0 && b != 0) || c == 0)
			cout << i << " ";
		i = i + 1;
	}
	return 1;
}