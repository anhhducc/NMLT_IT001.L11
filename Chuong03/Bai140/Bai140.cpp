#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
bool ktNguyenTo(int);
void NguyenToTang(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nMang duoc sap xep theo yeu cau: ";
	NguyenToTang(b, k);
	Xuat(b, k);
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

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void NguyenToTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j < n; j++)
			if (ktNguyenTo(a[i]) && ktNguyenTo(a[j]) && a[i] > a[j])
				HoanVi(a[i], a[j]);
}
