#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap nam n: ";
	cin >> n;
	if (n >= 1 && n % 400 == 0)
		cout << "La nam nhuan";
	else
		cout << "Khong la nam nhuan";
	return 1;
}