#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, f;
	cout << "Nhap x= ";
	cin >> x;
	if (x <= 1)
		if (x >= 0)
			f = 5 * x + 7;
		else
			f = -2 * x * x * x + 6 * x + 9;
	else
		f = 2 * x * x * x + 5 * x * x - 8 * x + 3;
	cout << "Gia tri ham so f(" << x << ")=" << f;
	return 1;
}