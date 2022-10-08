#include <iostream>
using namespace std;
int TongUocNho(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong uoc so nho hon "<<n<<" la: " << TongUocNho(n);
	return 0;
}
int TongUocNho(int k)
{
	int i = 1;
	int S = 0;
	while (i < k)
	{
		if (k % i == 0)
			S = S + i;
		i++;
	}
	return S;
}