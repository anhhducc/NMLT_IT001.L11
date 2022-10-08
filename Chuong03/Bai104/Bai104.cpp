#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int vtAmDau(float[], int);
int Timvt(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	int kq = Timvt(b, k);
	cout << "\nVi tri gia tri am lon nhat: " << kq;
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

int vtAmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return i;
	return -1;
}

int Timvt(float a[], int n)
{
	int lc = vtAmDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i]<0 && a[i]>a[lc])
			lc = i;
	return lc;
}
