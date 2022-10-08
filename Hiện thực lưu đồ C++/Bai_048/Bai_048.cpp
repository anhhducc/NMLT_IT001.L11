#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = t * (x + i);
		i = i + 1;
	}
	cout << "Tich la: " << t;
	return 1;
}