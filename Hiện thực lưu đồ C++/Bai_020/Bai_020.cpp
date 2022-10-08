#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float x2 = x * x;
	float x6 = x2 * x2 * x2;
	float x12 = x6 * x6;
	float x14 = x12 * x2;
	cout << "x^14= " << x14;
	return 1;
}