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
	int S = x, T = x;
	for (int i = 3; i <= 2 * k + 1; i = i + 2)
	{
		T = T * x * x;
		S = S + T;
	}
	return S;
}