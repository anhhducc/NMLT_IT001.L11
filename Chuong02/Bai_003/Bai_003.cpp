#include <iostream>
#include <cmath>
using namespace std;
float ChuVi(float r);

int main()
{
	float r;
	cout << "Nhap r= ";
	cin >> r;
	cout << "Chu vi duong tron= " << ChuVi(r);
	return 0;
}
float ChuVi(float r)
{
	float P = 2 * 3.14 * r;
	return P;
}