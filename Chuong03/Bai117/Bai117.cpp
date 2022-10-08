#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ktKhong(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nCheck ton tai: " << ktKhong(b, k);
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

int ktKhong(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			flag = 1;
		return flag;
}