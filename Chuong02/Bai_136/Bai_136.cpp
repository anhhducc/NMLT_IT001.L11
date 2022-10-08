#include<iostream>
#include<cmath>
using namespace std;
int ktNhuan(int);
void LietKe(int, int);

int main()
{
	int x, y;
	cout << "Nhap 2 nam: ";
	cin >> x >> y;
	LietKe(x, y);
}

int ktNhuan(int k)
{
	if ((k % 4 == 0 && k % 100 != 0) || (k % 400 == 0))
		return 1;
	else
		return 0;
}
void LietKe(int x, int y)
{
	for (int i = x; i <= y; i++)
		if (ktNhuan(i) == 1)
			cout << i << "  ";
}