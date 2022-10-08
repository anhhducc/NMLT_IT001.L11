#include <iostream>
#include <cmath>
using namespace std;
float Fibo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float kq = Fibo(n);

	cout << "So hang thu " << n << " cua day Fibonacci la: " << kq;
	return 1;
}
float Fibo(int n)
{
	float ftt = 1, ft = 1, fhh;
	for (int i = 2; i <= n; i = i + 1)
	{
		fhh = ft + ftt;
		ftt = ft;
		ft = fhh;
	}
	return fhh;
}