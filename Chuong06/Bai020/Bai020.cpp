#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float*, int&);
void Xuat(float*, int);
void LietKe(float*, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float* a;
	a = new float[n];
	Nhap(a, n);
	cout << "\nMang ban dau: " << endl;
	Xuat(a, n);
	cout << "\nCac gia tri cuc tieu trong mang: " << endl;
	LietKe(a, n);
	delete[]a;
	return 1;
}

void Nhap(float* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
}

void Xuat(float* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << fixed << setprecision(3) << a[i];
}

void LietKe(float* a, int n)
{
	if (n == 1)
	{
		return;
	}
	if (a[0] < a[1])
		cout << fixed << setprecision(3) << a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			cout << setw(12) << fixed << setprecision(3) << a[i];
	if (a[n - 1] < a[n - 2])
		cout << setw(12) << fixed << setprecision(3) << a[n - 1];
}
