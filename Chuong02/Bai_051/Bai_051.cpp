#include <iostream>
using namespace std;
int TichUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich tat ca uoc so= " << TichUocSo(n);
	return 0;
}
int TichUocSo(int k)
{
	int i = 1, T = 1;
	while (i <= k)
	{
		if (k % i == 0)
			T = T * i;
		i++;
	}
	return T;
}