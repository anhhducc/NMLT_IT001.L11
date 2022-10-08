#include <iostream>
using namespace std;
void LietKeUocLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac uoc so le la: ";
	LietKeUocLe(n);
	return 0;
}
void LietKeUocLe(int k)
{
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
			cout << i << "  ";
		i = i + 2;
	}
}