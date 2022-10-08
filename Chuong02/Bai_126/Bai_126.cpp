#include <iostream>
#include <cmath>
using namespace std;
void LonNhat(float&, float&, float&);

int main()
{
	float a, b, lc;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	LonNhat(a, b, lc);
	cout << "Max= " << lc;

	return 1;
}
void LonNhat(float& a, float& b, float& lc)
{
	lc = a;
	if (lc < b)
		lc = b;
}
