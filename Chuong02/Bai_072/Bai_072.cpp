#include <iostream>
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
	float S = 0;
	int M = 0;
	for (int i = 1; i <= k; i++)
	{
		M = M + i;
		S = S + (float)1 / M;
	}
	return S;
}