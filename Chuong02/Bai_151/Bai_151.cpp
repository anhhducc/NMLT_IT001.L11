#include<iostream>
#include<cmath>
using namespace std;
int ktDang2k(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = ktDang2k(n);
	if (kq == 1)
		cout << "Co dang";
	else
		cout << "Khong la dang";
	return 1;
}

int ktDang2k(int k)
{
	k = abs(k);
	int flag = 1;
	int t = k;
	while (t > 1)
	{
		int dv = t % 2;
		if (dv != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}