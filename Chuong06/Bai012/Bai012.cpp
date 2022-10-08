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
	cout << "\nCac vi tri tai do la gia tri am: " << endl;
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
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			cout << setw(6) << i;
}