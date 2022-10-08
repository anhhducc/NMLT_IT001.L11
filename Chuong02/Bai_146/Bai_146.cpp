#include<iostream>
#include<cmath>
using namespace std;
int ktDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = ktDoiXung(n);
	if (kq == 1)
		cout << "La so doi xung";
	else
		cout << "Khong la so doi xung";
	return 1;
}

int ktDoiXung(int k)
{
	int dn = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == k)
		return 1;
	else
		return 0;
}