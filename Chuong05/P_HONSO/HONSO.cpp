#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 106
struct honso
{
	int nguyen;
	int tu;
	int mau;
};
typedef struct honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
void RutGon(HONSO&);
HONSO Tong(HONSO, HONSO);
HONSO Hieu(HONSO, HONSO);
HONSO Tich(HONSO, HONSO);
HONSO Thuong(HONSO, HONSO);
int ktToiGian(HONSO);
void QuyDongMau(HONSO&, HONSO&);
void QuyDongTu(HONSO&, HONSO&);

//temp
HONSO clone(HONSO);

int main()
{
	// Bai 107
	HONSO x, y;
	cout << "\nNhap hon so thu 1: ";
	Nhap(x);
	cout << "\nNhap hon so thu 2: ";
	Nhap(y);

	// Bai 108
	cout << "\nHon so thu 1: ";
	Xuat(x);
	cout << endl;
	cout << "\nHon so thu 2: ";
	Xuat(y);
	cout << endl;

	// Bai 109
	cout << "\nRut gon hon so: ";
	cout << "\nHon so thu 1: ";
	RutGon(x);
	Xuat(x); cout << endl;
	cout << "\nHon so thu 2: ";
	RutGon(y);
	Xuat(y);
	cout << endl;

	// Bai 110
	HONSO A;
	A = Tong(x, y);
	cout << "\nTong 2 hon so: "; Xuat(A);
	cout << endl;

	// Bai 111
	HONSO B;
	B = Hieu(x, y);
	cout << "\nHieu 2 hon so: "; Xuat(B);
	cout << endl;

	// Bai 112
	HONSO C;
	C = Tich(x, y);
	cout << "\nTich 2 hon so: "; Xuat(C);
	cout << endl;

	// Bai 113
	HONSO D;
	D = Thuong(x, y);
	cout << "\nThuong 2 hon so: "; Xuat(D);
	cout << endl;
	
	// Bai 114
	cout << "\nCheck hon so toi gian hay ko? " << ktToiGian(x);
	cout << endl;

	// Bai 115
	HONSO(a);
	HONSO(b);
	a = clone(x);
	b = clone(y);
	cout << "\nQuy dong mau 2 hon so: ";
	QuyDongMau(a, b);
	Xuat(a); cout << endl;
	Xuat(b);
	cout << endl;

	// Bai 116
	a = clone(x);
	b = clone(y);
	cout << "\nQuy dong tu 2 hon so: ";
	QuyDongTu(a, b);
	Xuat(a); cout << endl;
	Xuat(b);

	return 1;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap phan nguyen: ";
	cin >> x.nguyen;
	cout << "Nhap tu: ";
	cin >> x.tu;
	cout << "Nhap mau: ";
	cin >> x.mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen: " << x.nguyen;
	cout << "\nTu: " << x.tu;
	cout << "\nMau: " << x.mau;
}


int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(HONSO& x)
{
	int kq = UCLN(x.tu, x.mau);
	x.tu = x.tu / kq;
	x.mau = x.mau / kq;
	x.nguyen = x.nguyen + x.tu / x.mau;
	x.tu = x.tu % x.mau;
}

HONSO Tong(HONSO x, HONSO y)
{
	HONSO temp;
	temp.nguyen = x.nguyen + y.nguyen;
	temp.tu = x.tu * y.mau + y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.nguyen = x.nguyen - y.nguyen;
	temp.tu = x.tu * y.mau - y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

HONSO Tich(HONSO x, HONSO y)
{
	x.tu = x.nguyen * x.mau + x.tu;
	x.nguyen = 0;
	y.tu = y.nguyen * y.mau + y.tu;
	y.nguyen = 0;
	HONSO temp;
	temp.tu = x.tu * y.tu;
	temp.mau = x.mau * y.mau;
	temp.nguyen = 0;
	RutGon(temp);
	return(temp);
}

HONSO Thuong(HONSO x, HONSO y)
{
	x.tu = x.nguyen * x.mau + x.tu;
	x.nguyen = 0;
	y.tu = y.nguyen * y.mau + y.tu;
	y.nguyen = 0;
	HONSO temp;
	temp.tu = x.tu * y.mau;
	temp.mau = x.mau * y.tu;
	temp.nguyen = 0;
	RutGon(temp);
	return(temp);
}

int ktToiGian(HONSO x)
{
	if (UCLN(x.tu, x.mau) == 1 && x.tu / x.mau == 0)
		return 1;
	return 0;
}

void QuyDongMau(HONSO& x, HONSO& y)
{
	int mc = x.mau * y.mau;
	x.tu = x.tu * y.mau;
	y.tu = x.mau * y.tu;
	x.mau = mc;
	y.mau = mc;
}

void QuyDongTu(HONSO& x, HONSO& y)
{
	int tc = x.tu * y.tu;
	x.mau = x.mau * y.tu;
	y.mau = y.mau * x.tu;
	x.tu = tc;
	y.tu = tc;
}


//TEMP
HONSO clone(HONSO x)
{
	HONSO temp;
	temp.tu = x.tu;
	temp.mau = x.mau;
	return temp;
}