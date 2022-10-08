#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float XaNhat(float[], int, float);

int main()
{
	float b[100];
	int k;
	float x;
	Nhap(b, k);
	cout << "\nNhap x: "; cin >> x;
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nGia tri xa gia tri " << x << " nhat: " << XaNhat(b, k, x);
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

float XaNhat(float a[], int n, float x)
{
	if (n == 1)
		return a[0];
	float lc = XaNhat(a, n - 1, x);
	if (abs(a[n - 1] - x) > abs(lc - x))
		lc = a[n - 1];
	return lc;
}
