#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
int DemGT(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau: " << endl;
	Xuat(b, k);
	cout << "\nSo luong gia tri lon hon cac gia tri dang truoc no: " << DemGT(b, k);
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

int DemGT(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	int dem = DemGT(a, n - 1);
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] >= a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}
