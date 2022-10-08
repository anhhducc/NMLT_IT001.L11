#include <iostream>
using namespace std;
int Tram(int);

int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	cout << "Chu so hang tram la: " << Tram(n);
	return 0;
}
int Tram(int n)
{
	int dv = (n % 1000) / 100;
	return dv;
}