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
	float P = 2 * n * r * sin(3.14 / n);
	cout <<"Chu vi= "<< P;
	return 1;
}