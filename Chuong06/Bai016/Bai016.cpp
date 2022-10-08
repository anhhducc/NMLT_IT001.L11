#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&, int&, int&);
void Xuat(int*, int);
void LietKe(int*, int, int, int);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x, y;
	int* a;
	a = new int[n];
	Nhap(a, n, x, y);
	cout << "\nMang ban dau: " << endl;
	Xuat(a, n);
	cout << "\nCac gia tri chan thuoc doan [" << x << "," << y << "]: " << endl;
	LietKe(a, n, x, y);
	delete[]a;
	return 1;
}

void Nhap(int* a, int& n, int& x, int& y)
{
	cout << "Nhap vao khoang [x,y]: ";
	cout << "\nx = ";
	cin >> x;
	cout << "\ny = ";
	cin >> y;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
			cout << a[i] << setw(5);
}

void LietKe(int* a, int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] <= y && a[i] >= x)
			if (a[i]%2==0)
			cout << setw(8) << fixed << setprecision(3) << a[i];
}