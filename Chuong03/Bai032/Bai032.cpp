#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[10000];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nCac bo ba gia tri thoa dieu kien: ";
	LietKe(b, k);
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap vao n: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int t = 0; t < n; i++)
			for (int j = 0; j < n; j++)
				if ((a[i] != a[t]) && (a[t] != a[j]) && (a[i] == a[t] + a[j]))
					cout << setw(8) << "(" << a[i] << "," << a[t] << "," << a[j] << ")";
}