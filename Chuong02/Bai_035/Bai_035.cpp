#include <iostream>
#include <cmath>
using namespace std;
int GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = GiaiThua(n);
	cout << "Ket qua: " << kq;
	return 1;
}
int GiaiThua(int n)
{
	int T = 1;
	for (int i = 1; i <= n; i = i + 1)
		T = T * i;
	return T;
}