#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int*, int&);
void Xuat(int*, int);
bool ktChinhPhuong(int);
void LietKe(int*, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int* a;
	a = new int[n];
	Nhap(a, n);
	cout << "\nMang ban dau: " << endl;
	Xuat(a, n);
	cout << "\nVi tri ma tai do la so chinh phuong: " << endl;
	LietKe(a, n);
	delete[]a;
	return 1;
}

void Nhap(int* a, int& n)
{
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(5);
}

bool ktChinhPhuong(int n)
{
	for (int i = 0; i * i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void LietKe(int* a, int n)
{
	for (int i = 0; i < n; i++)
		if (ktChinhPhuong(a[i]))
			cout << setw(6) << i;
}