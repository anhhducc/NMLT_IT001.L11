#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 117
struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);
SOPHUC LuyThua(SOPHUC, int);


int main()
{
	// Bai 118
	SOPHUC x, y;
	cout << "\nNhap so phuc thu 1: ";
	Nhap(x);
	cout << "\nNhap so phuc thu 2: ";
	Nhap(y);

	// Bai 119
	cout << "\nSo phuc thu 1: ";
	Xuat(x);
	cout << endl;
	cout << "\nSo phuc thu 2: ";
	Xuat(y);
	cout << endl;

	// Bai 120
	SOPHUC A = Tong(x, y);
	cout << "\nTong 2 so phuc: "; Xuat(A);
	cout << endl;

	// Bai 121
	SOPHUC B = Hieu(x, y);
	cout << "\nHieu 2 so phuc: "; Xuat(B);
	cout << endl;

	// Bai 122
	SOPHUC C = Tich(x, y);
	cout << "\nTich 2 so phuc: "; Xuat(C);
	cout << endl;

	// Bai 123
	SOPHUC D = Thuong(x, y);
	cout << "\nThuong 2 so phuc: "; Xuat(D);
	cout << endl;

	// Bai 124
	cout << "\nNhap bac luy thua n: ";
	int n; cin >> n;
	SOPHUC E = LuyThua(x, n);
	cout << "\nLuy thua bac " << n << " cua so phuc thu 1 la: "; Xuat(E);


	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.thuc;
	cout << "\nNhap phan ao: ";
	cin >> x.ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.thuc;
	cout << "\nPhan ao: " << x.ao;
}


SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc + y.thuc;
	temp.ao = x.ao + y.ao;
	return temp;
}

SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc - y.thuc;
	temp.ao = x.ao - y.ao;
	return temp;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc * y.thuc - x.ao * y.ao;
	temp.ao = x.thuc * y.ao + x.ao * y.thuc;
	return temp;
}

SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	float mc = y.thuc * y.thuc + y.ao * y.ao;
	temp.thuc = (x.thuc * y.thuc + x.ao * y.ao) / mc;
	temp.ao = (x.ao * y.thuc - x.thuc * y.ao) / mc;
	return temp;
}

SOPHUC LuyThua(SOPHUC x, int n)
{
	SOPHUC temp = { 1,0 };
	for (int i = 1; i <= n; i++)
		temp = Tich(temp, x);
	return temp;
}
