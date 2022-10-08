#include <iostream>
#include <cmath>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tong(n);
	cout << "Ket qua: " << kq;
	return 1;
}
int Tong(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++)
		S = S + i * i * i * i;
	return S;
}