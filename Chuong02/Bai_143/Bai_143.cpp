#include<iostream>
#include<cmath>
using namespace std;
int ktHoanThien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = ktHoanThien(n);
	if (kq == 1)
		cout << "La so hoan thien";
	else
		cout << "Khong la so hoan thien";
	return 1;
}

int ktHoanThien(int k)
{
	int S = 0;
	int i = 1;
	while (i < k)
	{
		if (k % i == 0)
			S = S + i;
		i = i + 1;
	}
	if (S == k)
		return 1;
	else
		return 0;
}