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
	float S = 1, T = 1;
	int M = 1;
	for (int i = 2; i <= 2 * k; i = i + 2)
	{

		T = T * x * x;
		M = M * (i - 1) * i;
		S = S + (float)T / M;
	}
	return S;
}