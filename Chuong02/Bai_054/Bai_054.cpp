#include <iostream>
using namespace std;
int TongUocChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong cac uoc so chan= " << TongUocChan(n);
	return 0;
}
int TongUocChan(int k)
{
	int i = 2;
	int S = 0;
	while (i <= k)
	{
		if (k % i == 0)
			S = S + i;
		i = i + 2;
	}
	return S;
}