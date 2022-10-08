#include <iostream>
using namespace std;
int ktTonTaiLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktTonTaiLe(n) == 1)
		cout << "Co ton tai chu so le";
	else
		cout << "Khong ton tai chu so le";
	return 0;
}
int ktTonTaiLe(int k)
{
	k = abs(k);
	int flag = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			return flag = 1;
		t = t / 10;
	}
	return flag;
}