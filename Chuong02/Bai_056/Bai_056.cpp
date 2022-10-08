#include <iostream>
using namespace std;
int DemUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong uoc so chan la: " << DemUocChan(n);
	return 0;
}
int DemUocChan(int k)
{
	int i = 2;
	int d = 0;
	while (i <= k)
	{
		if (k % i == 0)
			d++;
		i = i + 2;
	}
	return d;
}