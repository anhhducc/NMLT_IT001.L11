#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void Lietke(int[], int);
int ktnt(int);
int DemNguyenTo(int[], int);
int LonNhat(int[], int);
void vitrilonhat(int[], int);

int main()
{
	int b[10000];
	int k;
	
	Nhap(b, k);
	cout << "Mang ban dau";
	Xuat(b, k);
	
	cout << "\nGia tri le torng mang tren la: ";
	Lietke(b, k);

	cout << "\nSo cac so nguyen to trong day so tren la: ";
	int kq = DemNguyenTo(b, k);
	cout << kq;

	int lonnhat = LonNhat(b, k);
	cout << "\nSo lon nhat la: " << lonnhat;

	cout << "\nVi tri so lon nhat la: ";
	vitrilonhat(b, k);
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
		cout << setw(6) << a[i];
}

void Lietke(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			cout << setw(6) << a[i];
}

int ktnt(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

int DemNguyenTo(int a[], int k)
{
	int dem = 0;
	for (int i = 0; i < k; i++)
		if (ktnt(a[i]) == 1 && a[i] < 100)
			dem = dem + 1;
	return dem;
}

int LonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void vitrilonhat(int a[], int n)
{
	int lc = LonNhat(a, n);	
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
		{
			cout << i + 1 << ", ";
		}
}

