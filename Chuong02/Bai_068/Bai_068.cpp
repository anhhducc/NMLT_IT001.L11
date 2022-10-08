#include <iostream>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << Tong(n);
	return 0;
}
int Tong(int k)
{
	int S = 0;
	int T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * i;
		S = S + T;
	}
	return S;
}