#include <iostream>
using namespace std;
int ktTonTaiChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (ktTonTaiChan(n) == 1)
		cout << "Co ton tai chu so chan";
	else
		cout << "Khong ton tai chu so chan";
	return 0;
}
int ktTonTaiChan(int k)
{
	k = abs(k);
	int flag = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			return flag = 1;
		t = t / 10;
	}
	return flag;
}