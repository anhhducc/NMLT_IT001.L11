#include <iostream>
#include <cmath>
using namespace std;

float TinhToan(int);

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	float kq = TinhToan(n);
	cout << "Ket qua la: " << kq << endl;
	return 1;
}

float TinhToan(int n)
{
	if (n == 0)
		return 1;
	float s = TinhToan(n - 1);
	return (s * (1 + (float)1 / (n * n)));
}
