#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	long at = 2, bt = 1, i = 2, ahh, bhh;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu a" << n << ": " << ahh << "   ";
	cout << "So hang thu b" << n << ": " << bhh;
	return 1;
}