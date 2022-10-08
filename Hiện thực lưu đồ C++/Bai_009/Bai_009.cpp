#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n canh= ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh r= ";
	cin >> r;
	float S = 0.5 * n * r * r * sin(2 * 3.14 / n);
	cout << "Dien tich= " << S;
	return 1;
}