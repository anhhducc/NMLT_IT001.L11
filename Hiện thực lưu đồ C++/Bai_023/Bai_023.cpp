#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int dv = (n % 100) / 10;
	cout << "Chu so hang chuc la: " << dv;
	return 1;
}