#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float DauTien(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nGia tri dau tien > 2003: " << DauTien(b, k);
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -10000 + rand() / (RAND_MAX / (10000.0 - (-10000.0)));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

float DauTien(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DauTien(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 2003)
		return a[n - 1];
	return 0;
}
