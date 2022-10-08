#include<iostream>
#include<cmath>
using namespace std;
float Tong();
int main()
{
	float kq = Tong();
	cout << "Tong= " << kq;
	return 1;
}
float Tong()
{
	float S = 1, e = 1;
	for (int i = 1; e >= pow(10, -6); i = i + 1)
	{
		e = (float)1 / (2 * i + 1);
		S = S + e;
	}
	return S;
}