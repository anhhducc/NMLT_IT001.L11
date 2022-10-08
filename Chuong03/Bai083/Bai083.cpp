#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DauTien(int[], int, int, int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	float x, y;
	cout << "\nNhap khoang (x,y)= " << endl;
	cin >> x >> y;
	cout << "\nGia tri dau tien: ";
	int kq = DauTien(b, k,x,y);
	cout << kq;
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

int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}

