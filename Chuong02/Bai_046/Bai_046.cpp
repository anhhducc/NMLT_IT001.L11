#include <iostream>
#include<cmath>
using namespace std;
float Tong(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tong(n);
	cout << "Ket qua: " << S;
	return 0;
}
float Tong(int n)
{
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + (float)1 / ((i + 1) * sqrt(i) + i * sqrt(i + 1));
		i++;
	}
	return S;
}