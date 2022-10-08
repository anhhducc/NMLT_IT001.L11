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
float Tong(float x, int k)
{
	float S = 0, T = x;
	for (int i = 1; i <= k; i++)
	{
		T = sin(T);
		S = S + T;
	}
	return S;
}