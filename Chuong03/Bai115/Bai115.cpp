#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void GanNhat(float[], int, float&, float&);

int main()
{
	float b[100];
	int k;
	float x, y;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	GanNhat(b, k, x, y);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / 200.0);
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) <<fixed<< setprecision(3) << a[i];
}
void GanNhat(float a[], int n, float& x, float& y)
{
	cout << "\nHai gia tri gan nhau nhat trong mang la: ";
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
	cout << x << " va " << y;
}