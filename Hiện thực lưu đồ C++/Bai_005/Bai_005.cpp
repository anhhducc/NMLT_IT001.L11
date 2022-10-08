#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap r= ";
	cin >> r;
	float v =(float) (4 * 3.14 * pow(r,3))/3;
	cout << "The tich= " << v;
	return 1;
}