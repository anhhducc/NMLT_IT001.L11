#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\n Cac gia tri xuat hien dung 1 lan: ";
	LietKe(b, k);
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int kq = TanSuat(a, n, a[i]);
		if (kq == 1)
			cout << setw(6) << a[i];
	}
}

