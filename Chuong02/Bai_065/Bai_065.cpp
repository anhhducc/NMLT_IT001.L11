#include <iostream>
using namespace std;
int NhoNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so nho nhat la: " << NhoNhat(n);
	return 0;
}
int NhoNhat(int k)
{
	k = abs(k);
	int t = k;
	int lc = k % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (lc > dv)
			lc = dv;
		t = t / 10;
	}
	return lc;
}