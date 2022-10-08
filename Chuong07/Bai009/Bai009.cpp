#include <iostream>
#include <cmath>
using namespace std;

int GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	int kq = GiaiThua(n);
	cout << "Giai thua la: " << kq << endl;
	return 1;
}

int GiaiThua(int n)
{
	if (n == 0)
		return 1;
	int T = GiaiThua(n - 1);
	return (T * n);
}
