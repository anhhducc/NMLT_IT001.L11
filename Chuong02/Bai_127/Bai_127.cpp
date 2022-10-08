#include <iostream>
#include <cmath>
using namespace std;
void NhoNhat(float&, float&, float&);

int main()
{
	float a, b, lc;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	NhoNhat(a, b, lc);
	cout << "Min= " << lc;

	return 1;
}
void NhoNhat(float& a, float& b, float& lc)
{
	lc = a;
	if (lc > b)
		lc = b;
}
