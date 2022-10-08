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
	float S = 0, T = 1;
	for (int i = 1; i <= k; i = i + 1)
	{
		T = T * i;
		S = pow(T + S, (float)1 / (i + 1));
	}
	return S;
}