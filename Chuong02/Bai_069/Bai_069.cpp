#include <iostream>
#include <math.h>
using namespace std;
int Tong(float, int);

int main()
{
	int x, n;
	cout << "Nhap x, n: ";
	cin >> x >> n;
	cout <<"Ket qua: "<< Tong(x, n);
	return 0;
}
int Tong(float x, int k)
{
	int S = 0, T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * x;
		S = S + T;
	}
	return S;
}