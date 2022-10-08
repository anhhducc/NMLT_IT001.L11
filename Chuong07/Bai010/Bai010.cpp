#include <iostream>
#include <cmath>
using namespace std;

long double LuyThua(double,int);

int main()
{
	int x,n;
	cout << "Nhap x: "; cin >> x;
	cout << "\nNhap n: "; cin >> n;
	int kq = LuyThua(x,n);
	cout << "Luy thua la: " << kq << endl;
	return 1;
}

long double LuyThua(double x, int n)
{
	if (n == 0)
		return 1;
	float T = LuyThua(x, n - 1);
	return (T * x);
}
