#include<iostream>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO M;
	Nhap(M);
	cout << "\nHon so vua nhap: ";
	Xuat(M);
	return 1;
}

void Nhap(HONSO& x)
{
	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "\nNhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}