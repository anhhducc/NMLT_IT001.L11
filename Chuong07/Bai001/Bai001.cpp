#include <iostream>
#include <cmath>
using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	int kq = Tong(n);
	cout << "Tong la: " << kq << endl;
	return 1;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	int s = Tong(n - 1);
	return (s+n);
}
