#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tong(n);
	cout << "Ket qua: " << kq;
	return 1;
}
float Tong(int n)
{
	float S = 0;
	for (int i = 2; i <= 2*n; i=i+2)
		S = S + (float)1 / i;
	return S;
}