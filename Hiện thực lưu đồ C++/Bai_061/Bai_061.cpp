#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	int d = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			d = d + 1;
		t = t / 10;
	}
	cout << "So luong cac chu so le cua " << n << " la: " << d;
	return 1;
}