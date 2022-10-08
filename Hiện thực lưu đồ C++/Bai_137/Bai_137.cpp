#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, f;
	cout << "Nhap x= ";
	cin >> x;
	if (x >= 5)
		 f = 2 * x * x + 5 * x + 9;
	else
		 f = -2 * x * x + 4 * x - 9;
	cout << "Gia tri ham so f(" << x << ")=" << f;
	return 1;
}