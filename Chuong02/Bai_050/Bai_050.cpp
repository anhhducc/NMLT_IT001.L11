#include <iostream>
using namespace std;
int TongUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong tat ca uoc so= " << TongUocSo(n);
	return 0;
}
int TongUocSo(int k)
{
	int i = 1, S = 0;
	while (i <= k)
	{
		if (k % i == 0)
			S = S + i;
		i++;
	}
	return S;
}