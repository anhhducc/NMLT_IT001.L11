#include <iostream>
#include <math.h>
using namespace std;
float Tong(float, int);

int main()
{
	float x;
	int n;
	cout << "Nhap x, n: ";
	cin >> x >> n;
	cout << "Ket qua: " << Tong(x, n);
	return 0;
}
float Tong(float x, int n)
{
	float S = 1 / x, M = x;
	for (int i = 1; i <= n; i++)
	{
		M = M * (x + i);
		S = S + (float)1 / M;
	}
	return S;
}