#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang5m(int n);
int TimGiaTri(int[], int);


int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nGia tri lon nhat co dang 5^m: " << TimGiaTri(b, k);
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

bool ktDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t = t / 5;
	}
	return flag;
}

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		 return 0;
	 int lc = TimGiaTri(a, n - 1);
	 if (!ktDang5m(a[n - 1]))
		 return lc;
	 if (lc == 0)
		 return a[n - 1];
	 if (a[n - 1] > lc)
		 lc = a[n - 1];
	 return lc;
}