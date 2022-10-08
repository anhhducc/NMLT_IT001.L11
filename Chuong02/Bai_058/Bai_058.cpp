#include<iostream>
#include<cmath>
using namespace std;
int TongChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = TongChuSo(n);
	cout << "Tong chu so: " << kq;
	return 1;
}
int TongChuSo(int k)
{
	int S = 0;
	k = abs(k);
	for (int t=k; t!=0 ; t=t/10)
	{
		int dv = t % 10;
		S = S + dv;
	}
	return S;
}