#include <iostream>
using namespace std;
int TichUocLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich cac uoc so le= " << TichUocLe(n);
	return 0;
}
int TichUocLe(int k)
{
	int i = 1;
	int T = 1;
	while (i <= k)
	{
		if (k % i == 0)
			T = T * i;
		i = i + 2;
	}
	return T;
}