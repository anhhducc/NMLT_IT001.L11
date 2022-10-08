#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float*, int&, float&, float&);
void Xuat(float*, int);
void LietKe(float*, int, float, float);


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x, y;
	float* a;
	a = new float[n];
	Nhap(a, n, x, y);
	cout << "\nMang ban dau: " << endl;
	Xuat(a, n);
	cout << "\nCac gia tri thuoc doan [" << x << "," << y << "]: " << endl;
	LietKe(a, n, x, y);
	delete[]a;
	return 1;
}

void Nhap(float* a, int& n, float& x, float& y)
{
	cout << "Nhap vao khoang [x,y]: ";
	cout << "\nx = ";
	cin >> x;
	cout << "\ny = ";
	cin >> y;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
}

void Xuat(float* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

void LietKe(float* a, int n, float x, float y)
{
	for (int i = 0; i < n; i++)
		if (a[i] <= y && a[i] >= x)
			cout << setw(8) << fixed << setprecision(3) << a[i];
}