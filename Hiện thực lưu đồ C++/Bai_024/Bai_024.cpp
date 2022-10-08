#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int dv = (n % 1000) / 100;
	cout << "Chu so hang tram la: " << dv;
	return 1;
}