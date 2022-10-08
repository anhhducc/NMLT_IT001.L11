#include <iostream>
#include <math.h>
using namespace std;
float Tong(float, int);

int main()
{
	float n;
	int k;
	cout << "Nhap n, k: ";
	cin >> n >> k;
	cout <<"Ket qua: "<< Tong(n, k);
	return 0;
}
float Tong(float n, int k)
{
	float S = 0;
	for (int i = 1; i <= n; i++)
	{
		S = S + pow(i, k);
	}
	return S;
}