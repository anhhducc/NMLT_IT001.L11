#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nTong cac gia tri doi xung= ";
	int kq = TongDoiXung(b, k);
	cout << kq;
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (2000 + 1) - 1000;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

bool ktDoiXung(int a)
{
	int dn = 0;
	for (int i = a; i < 0; i = i / 10)
		dn = dn * 10 + i % 10;
	if (dn == a)
		return true;
	return false;
}

int TongDoiXung(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]))
			s = s + a[i];
	return s;
}