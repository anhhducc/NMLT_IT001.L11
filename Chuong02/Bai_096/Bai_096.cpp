#include<iostream>
#include<cmath>
using namespace std;
float Tong(float);
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float kq = Tong(n);
	cout << "Tong= " << kq;
	return 1;
}
float Tong(float k)
{
	float S = 0, gt = 1;
	for (float i = 0; i <= (k-1); i = i + 1)
	{
		gt = gt * (i + 1);
		S = sqrt(gt + S);
	}
	return S;
}