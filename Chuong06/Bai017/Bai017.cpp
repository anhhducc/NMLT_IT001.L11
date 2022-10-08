#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
void LietKe(int*, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a;
	a = new int[n];
	Nhap(a, n);
	cout << "\nMang ban dau: " << endl;
	Xuat(a, n);
	cout << "\nCac phan tu chan nam tren 1 hang, cac phan tu le nam o hang tiep theo: " << endl;
	LietKe(a, n);
	delete[]a;
	return 1;
}

void Nhap(int* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(5);
}

void LietKe(int* a, int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << setw(6) << a[i];
	cout << endl;
	cout << endl;
	for (int i = 0; i < n; i++)
		if (a[i]%2!=0)
			cout << setw(6) << a[i];
}
