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
	for (int i = 1; i <= n; i = i + 1)
		S = S + (float)i / (i + 1);
	return S;
}