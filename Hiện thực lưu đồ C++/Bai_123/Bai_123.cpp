#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int at = 2, bt = 1, i = 2, ahh, bhh;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang thu a" << n << ": " << ahh << "   ";
	cout << "So hang thu b" << n << ": " << bhh;
	return 1;
}