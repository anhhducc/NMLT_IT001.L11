#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
void LietKe(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nCac gia tri toan chu so le: ";
	LietKe(b, k);
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
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
		if (ktToanLe(a[i]))
			cout << setw(6) << a[i];
}

bool ktToanLe(int n)
{
	int flag = true;
		int t = abs(n);
		while (t != 0)
		{
			int dv = t % 10;
			if (dv % 2 == 0)
				flag = false;
			t = t / 10;
		}
		return flag;
		
}