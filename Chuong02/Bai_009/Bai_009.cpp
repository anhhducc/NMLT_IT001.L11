#include <iostream>
#include <cmath>
using namespace std;
float DienTich(int n, float r);

int main()
{
	int n;
	cout << "Nhap so canh n= ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh r= ";
	cin >> r;
	cout << "Dien tich da giac deu= " << DienTich(n, r);
	return 0;
}
float DienTich(int n, float r)
{
	float S = (float)(n * r * r * sin((float)2 * 3.14 / n)) / 2;
	return S;
}