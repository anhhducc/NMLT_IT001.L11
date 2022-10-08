#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nSo luong gia tri trong mang lon hon cac gia tri truoc no: " << DemGiaTri(b, k);
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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] >= a[i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}
