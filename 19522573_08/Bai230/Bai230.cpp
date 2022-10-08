#include<iostream>
#include<iomanip>
using namespace std;

struct ngay
{
	int Ng;
	int Th;
	int Nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Nhap(NGAY[], int&);

int main()
{
	NGAY b[100];
	int k;

	Nhap(b, k);
	return 1;
}

void Nhap(NGAY& x)
{
	cout << endl;
	cout << "Nhap ngay: ";
	cin >> x.Ng;
	cout << "Nhap thang: ";
	cin >> x.Th;
	cout << "Nhap nam: ";
	cin >> x.Nm;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
