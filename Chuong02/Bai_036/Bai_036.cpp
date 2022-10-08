#include <iostream>
#include <cmath>
using namespace std;
int LuyThua(int, int);

int main()
{
	int x, n;
	cout << "Nhap x, n= ";
	cin >> x >> n;
	cout << "T(" << x << "," << n << ")= " << LuyThua(x, n);
	return 0;
}
int LuyThua(int x, int n)
{
	int T = 1;
	for (int i = 1; i <= n; i++)
		T = T * x;
	return T;
}