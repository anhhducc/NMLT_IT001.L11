#include<iostream>
#include<iomanip>
using namespace std;
void Nhapa(int[], int&);
void Xuata(int[], int);
void Nhapb(int[], int&);
void Xuatb(int[], int);
int DemCon(int[], int, int[], int);

int main()
{
	int p[100], q[100];
	int k, t;
	Nhapa(p, k);
	cout << "Mang a: ";
	Xuata(p, k);
	Nhapb(q, t);
	cout << "Mang b: ";
	Xuatb(q, t);
	cout << "\nSo lan xuat hien cua mang a trong mang b: " << DemCon(p, k, q, t);

	return 0;
}
void Nhapa(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}
void Xuata(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
void Nhapb(int b[], int& m)
{
	cout << "\nNhap m: ";
	cin >> m;
	srand(time(nullptr));
	for (int i = 0; i < m; i++)
		b[i] = rand() % (200 + 1) - 100;
}
void Xuatb(int b[], int m)
{
	for (int i = 0; i < m; i++)
		cout << setw(6) << b[i];
}
int DemCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}

