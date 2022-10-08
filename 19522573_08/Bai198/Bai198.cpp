#include <iostream>
#include <cmath>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);

int main()
{
	PHANSO b[100];
	int k;

	Nhap(b, k);
	return 1;
}

void Nhap(PHANSO& P)
{
	cout << "Tu: ";
	cin >> P.tu;
	cout << "Mau: ";
	cin >> P.mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Nhap a["<< i <<"]: " << endl;
		Nhap(a[i]);
	}
}
