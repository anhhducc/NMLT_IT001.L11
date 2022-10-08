#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void MotVeDau(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\n Dua so 1 ve dau mang: ";
	MotVeDau(b, k);
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

void MotVeDau(int a[], int n)
{
	int vt = 0;
	for (int i=0;i<n;i++)
		if (a[i] == 1)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}
