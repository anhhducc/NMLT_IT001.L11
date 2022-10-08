#include<iostream>
#include<cmath>
using namespace std;
int ktChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = ktChinhPhuong(n);
	if (kq == 1)
		cout << "La so chinh phuong";
	else
		cout << "Khong la so chinh phuong";
	return 1;
}

int ktChinhPhuong(int k)
{
	int flag = 0;
	int i = 0;
	while (i < k)
	{
		if (i * i == k)
			flag = 1;
		i++;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}