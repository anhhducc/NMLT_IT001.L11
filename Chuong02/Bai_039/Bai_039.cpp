#include <iostream>
using namespace std;
float Tong(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tong(n);
	cout <<"Ket qua: " << S;
	return 0;
}
float Tong(int n)
{
	float S = 1;
	int i = 1;
	while (i <= n)
	{
		S = S * (1 + (float)1 / pow(i, 2));
		i++;
	}
	return S;
}