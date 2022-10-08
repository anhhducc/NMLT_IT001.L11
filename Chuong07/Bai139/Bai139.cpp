#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int ChanNhoNhat(int[], int);
int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nGia tri chan nho nhat: " << ChanNhoNhat(b, k);
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

int ChanNhoNhat(int a[], int n)
{
	if (n == 0)
		 return -1;
	 int lc = ChanNhoNhat(a, n - 1);
	 if (a[n - 1] % 2 != 0)
		 return lc;
	 if (lc == -1)
		 return a[n - 1];
	 if (a[n - 1] < lc)
		 lc = a[n - 1];
	 return lc;
}
