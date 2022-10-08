#include <iostream>
#include <cmath>
using namespace std;
void BienDoi(float&, float&);

int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	BienDoi(a, b);
	cout << "Tri tuyet doi a= " << a << endl << "Tri tuyet doi b= " << b;

	return 1;
}
void BienDoi(float& a, float& b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
}