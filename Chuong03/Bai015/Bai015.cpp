#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&, float&, float&);
void Xuat(float[], int);
void LietKe(float[], int, float, float);

int main()
{
	float b[100];
	int k;
	float x, y;
	Nhap(b, k, x, y);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nCac gia tri thuoc doan ["<<x<<","<<y<<"] la: ";
	LietKe(b, k, x, y);
	return 1;
}

void Nhap(float a[], int& n, float& x, float& y)
{
	cout << "Nhap vao khoang [x,y]: ";
	cout << "\nx = ";
	cin >> x;
	cout << "\ny = ";
	cin >> y;
	cout << "\nNhap n: ";
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

void LietKe(float a[], int n, float x, float y)
{
	for (int i = 0; i < n; i++)
		if (a[i] <= y && a[i] >= x)
			cout << setw(8) << fixed << setprecision(3) << a[i];
}