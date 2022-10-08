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
	float S = 0;
	for (float i = 1; i <= k; i = i + 1)
	{
		S = sqrt(i + S);
	}
	return S;
}