#include <iostream>
#include<cmath>
using namespace std;
float Tong(float, int);

int main()
{
	int x, n;
	cout << "Nhap x, n: ";
	cin >> x >> n;
	cout << "Ket qua: " << Tong(x, n);
	return 0;
}
float Tong(float x, int n)
{
	float S = x;
	int i = 1;
	while (i <= n)
	{
		S = S * (x + i);
		i++;
	}
	return S;
}