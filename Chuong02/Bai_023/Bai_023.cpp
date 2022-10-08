#include <iostream>
using namespace std;
int Chuc(int);

int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	cout << "Chu so hang chuc la: " << Chuc(n);
	return 0;
}
int Chuc(int n)
{
	int dv = (n % 100) / 10;
	return dv;
}