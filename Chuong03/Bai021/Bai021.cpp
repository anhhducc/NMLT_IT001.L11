#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nCac gia tri lon hon tri tuyet doi cua gia tri lien sau no: ";
	LietKe(b, k);
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

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > abs(a[i + 1]))
			cout << setw(10) << fixed << setprecision(3) << a[i];
}
