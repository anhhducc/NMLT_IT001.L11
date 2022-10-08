#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	int n;
	cout << "Nhap n= ";
	cin >> n;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		i = i + 1;
	}
	cout << "Luy thua la: " << t;
	return 1;
}