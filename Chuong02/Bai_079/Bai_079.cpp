#include <iostream>
#include <math.h>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << Tong(n);
	return 0;
}
float Tong(int k)
{
	float S = 0, T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * i;
		S = S + i * T;
	}
	return S;
}