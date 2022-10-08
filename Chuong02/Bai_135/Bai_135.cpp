#include<iostream>
#include<cmath>
using namespace std;
int ktNhuan(int);

int main()
{
	int n;
	cout << "Nhap nam n: ";
	cin >> n;

	int kq = ktNhuan(n);

	if (kq == 1)
		cout <<n<< " la nam nhuan";
	else
		cout <<n<< " khong la nam nhuan";
	return 1;
}

int ktNhuan(int k)
{
	if ((k % 4 == 0 && k % 100 != 0) || (k % 400 == 0))
		return 1;
	else
		return 0;
}