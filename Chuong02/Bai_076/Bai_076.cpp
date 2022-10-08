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
	cout <<"Ket qua: "<< Tong(x, n);
	return 0;
}
float Tong(float x, int k)
{
	float S = 1 + x, T = x;
	int M = 1;
	for (int i = 3; i <= 2 * k + 1; i = i + 2)
	{

		T = T * x * x;
		M = M * (i - 1) * i;
		S = S + (float)T / M;
	}
	return S;
}