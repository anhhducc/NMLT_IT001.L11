#include <iostream>
#include <cmath>
using namespace std;

float Tinh(float, int);

int main()
{
	float x;
	int n;
	cout << "Nhap x: "; cin >> x;
	cout << "\nNhap n: "; cin >> n;
	cout << "\nS(" << x << "," << n << ") = " << Tinh(x, n);
	return 1;
}

float Tinh(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1+x*x/2;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	float hs = x * x / (2 * n - 1) / (2 * n);
	return ((1 + hs) * a - hs * b);
}
