#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&, float&, float&);
void Xuat(int[], int);
bool ktChan(int);
void LietKe(int[], int, float x, float y);

int main()
{
	int b[100];
	int k;
	float x, y;
	Nhap(b, k, x, y);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nCac gia tri chan thuoc doan [" << x << "," << y << "] la: ";
	LietKe(b, k, x, y);
	return 1;
}

void Nhap(int a[], int& n, float& x, float& y)
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

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

bool ktChan(int a)
{
	if (a % 2 == 0)
		return true;
	else return false;
}

void LietKe(int a[], int n, float x, float y)
{
	for (int i = 0; i < n; i++)
		if (ktChan(a[i]) && a[i] >= x && a[i] <=y)
			cout << setw(8) << a[i];
}