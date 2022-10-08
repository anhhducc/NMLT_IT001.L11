#include <iostream>
#include <cmath>
using namespace std;
float ChuyenDoi(int f);

int main()
{
	float f;
	cout << "Nhap do F= ";
	cin >> f;
	cout << "Do C= " << ChuyenDoi(f);
	return 0;
}
float ChuyenDoi(int f)
{
	float c = (float)5 / 9 * (f - 32);
	return c;
}