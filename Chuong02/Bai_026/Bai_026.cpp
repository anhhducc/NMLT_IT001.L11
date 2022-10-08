#include <iostream>
using namespace std;
void HoanVi(int&, int&);

int main()
{
	int a, b;
	cout << "Nhap a, b: ";
	cin >> a >> b;
	HoanVi(a, b);
	cout << a << " " << b;
	return 0;
}
void HoanVi(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}