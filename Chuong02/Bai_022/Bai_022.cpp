#include <iostream>
using namespace std;
int DonVi(int);

int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	cout << "Chu so hang don vi la: " << DonVi(n);
	return 0;
}
int DonVi(int n)
{
	int dv = n % 10;
	return dv;
}