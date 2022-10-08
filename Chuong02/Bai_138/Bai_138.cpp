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
	if (x <= 1)
	{
		if (x >= 0)
			return 5 * x - 7;
		else
			return -2 * x * x * x + 6 * x + 9;
	}
	else
		return 2 * x * x * x + 5 * x * x - 8 * x + 3;
}