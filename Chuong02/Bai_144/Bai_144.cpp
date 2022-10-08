#include<iostream>
#include<cmath>
using namespace std;
int ktNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = ktNguyenTo(n);
	if (kq == 1)
		cout << "La so nguyen to";
	else
		cout << "Khong la so nguyen to";
	return 1;
}

int ktNguyenTo(int k)
{
	int d = 0;
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
			d = d + 1;
		i++;
	}
	if (d == 2)
		return 1;
	else
		return 0;
}