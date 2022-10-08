#include <iostream>
using namespace std;
int DemUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong uoc so= " << DemUocSo(n);
	return 0;
}
int DemUocSo(int k)
{
	int i = 1, d = 0;
	while (i <= k)
	{
		if (k % i == 0)
			d++;
		i++;
	}
	return d;
}