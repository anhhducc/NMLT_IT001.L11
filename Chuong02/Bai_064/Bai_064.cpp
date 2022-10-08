#include <iostream>
using namespace std;
int LonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so lon nhat la: " << LonNhat(n);
	return 0;
}
int LonNhat(int k)
{
	k = abs(k);
	int t = k;
	int lc = k % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}