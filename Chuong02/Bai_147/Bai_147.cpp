#include<iostream>
#include<cmath>
using namespace std;
int ktToanLe(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (ktToanLe(n) == 1)
		cout << "Co toan le";
	else
		cout << "Khong toan le";
	return 1;
}
int ktToanLe(int k)
{
	int flag = 1;
	for (int t = k; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}