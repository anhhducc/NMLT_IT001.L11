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
		return 0;
	if (n == 1)
		return x;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x) * a - x * b);
}
