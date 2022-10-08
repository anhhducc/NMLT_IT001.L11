#include<iostream>
#include<cmath>
using namespace std;
float TinhGiaTri(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = TinhGiaTri(x);
	cout <<"Gia tri ham f(x)= "<< kq;
	return 1;
}

float TinhGiaTri(float x)
{
	if (x >= 5)
		return 2 * x * x + 5 * x + 9;
	else
		return -2 * x * x + 4 * x - 9;
}