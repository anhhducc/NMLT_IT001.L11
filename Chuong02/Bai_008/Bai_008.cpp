#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
float ChuVi(int n, float r);
int main()
{
	int n;
	cout << "Nhap so canh n= ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh r= ";
	cin >> r;
	cout << "Chu vi da giac deu= " << ChuVi(n, r);
	return 0;
}
float ChuVi(int n, float r)
{
	float P = 2 * n * r * sin((float)3.14 / n);
	return P;
}