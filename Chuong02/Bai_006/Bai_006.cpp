#include <iostream>
#include <cmath>
using namespace std;
float ChuyenDoi(int c);

int main()
{
	int c;
	cout << "Nhap do C= ";
	cin >> c;
	cout << "Do F= " << ChuyenDoi(c);
	return 0;
}

float ChuyenDoi(int c)
{
	float f = (float)9 * c / 5 + 32;
	return f;
}