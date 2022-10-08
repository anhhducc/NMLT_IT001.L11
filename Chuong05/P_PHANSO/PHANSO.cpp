#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 087
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void RutGon(PHANSO&);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);
int ktCoNghia(PHANSO);
int ktToiGian(PHANSO);
int ktDuong(PHANSO);
int ktAm(PHANSO);
void QuyDongMau(PHANSO&, PHANSO&);
void QuyDongTu(PHANSO&, PHANSO&);
int SoSanh(PHANSO, PHANSO);
PHANSO operator+ (PHANSO, PHANSO);
PHANSO operator- (PHANSO, PHANSO);
PHANSO operator* (PHANSO, PHANSO);
PHANSO operator/ (PHANSO, PHANSO);

//TEMP
PHANSO clone(PHANSO);

int main()
{
	// Bai 088
	PHANSO x, y;
	cout << "\nNhap phan so thu 1: ";
	Nhap(x);
	cout << "\nNhap phan so thu 2: ";
	Nhap(y);

	// Bai 089
	cout << "\nPhan so thu 1: ";
	Xuat(x);
	cout << endl;
	cout << "\nPhan so thu 2: ";
	Xuat(y);
	cout << endl;

	// Bai 090
	cout << "\nRut gon phan so: ";
	cout << "\n  Phan so thu 1: ";
	RutGon(x);
	Xuat(x); cout << endl;
	cout << "\n  Phan so thu 2: ";
	RutGon(y);
	Xuat(y);
	cout << endl;

	// Bai 091
	PHANSO A;
	A = Tong(x, y);
	cout << "\nTong 2 phan so: "; Xuat(A);
	cout << endl;

	// Bai 092
	PHANSO B;
	B = Hieu(x, y);
	cout << "\nHieu 2 phan so: "; Xuat(B);
	cout << endl;

	// Bai 093
	PHANSO C;
	C = Tich(x, y);
	cout << "\nTich 2 phan so: "; Xuat(C);
	cout << endl;

	// Bai 094
	PHANSO D;
	D = Thuong(x, y);
	cout << "\nThuong 2 phan so: "; Xuat(D);
	cout << endl;

	// Bai 095
	cout << "\nCheck phan so co nghia hay ko? " << ktCoNghia(x);

	// Bai 096
	cout << "\nCheck phan so toi gian hay ko? " << ktToiGian(x);

	// Bai 097
	cout << "\nCheck phan so duong? " << ktDuong(x);

	// Bai 098
	cout << "\nCheck phan so am? " << ktAm(x);
	cout << endl;

	// Bai 099
	PHANSO(a);
	PHANSO(b);
	a = clone(x);
	b = clone(y);
	cout << "\nQuy dong mau 2 phan so: ";
	QuyDongMau(a, b);
	Xuat(a); cout << endl;
	Xuat(b);
	cout << endl;

	// Bai 100
	a = clone(x);
	b = clone(y);
	cout << "\nQuy dong tu 2 phan so: ";
	QuyDongTu(a, b);
	Xuat(a); cout << endl;
	Xuat(b);
	cout << endl;

	// Bai 101
	cout << "\nSo sanh 2 phan so: " << SoSanh(x, y);
	cout << endl;

	// Bai 102
	PHANSO A1 = x + y;
	cout << "Dinh nghia toan tu cong 2 phan so: ";
	Xuat(A);
	cout << endl;

	// Bai 103
	PHANSO A2 = x - y;
	cout << "Dinh nghia toan tu hieu 2 phan so: ";
	Xuat(B);
	cout << endl;

	// Bai 104
	PHANSO A3 = x * y;
	cout << "Dinh nghia toan tu tich 2 phan so: ";
	Xuat(C);
	cout << endl;

	// Bai 105
	PHANSO A4 = x / y;
	cout << "Dinh nghia toan tu thuong 2 phan so: ";
	Xuat(D);

	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.tu;
	cout << "Nhap mau: ";
	cin >> x.mau;
}

void Xuat(PHANSO x)
{
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

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.tu, x.mau);
	x.tu = x.tu / kq;
	x.mau = x.mau / kq;
}

PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau + y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau - y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

PHANSO Tich(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.tu;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

PHANSO Thuong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau;
	temp.mau = x.mau * y.tu;
	RutGon(temp);
	return temp;
}

int ktCoNghia(PHANSO x)
{
	if (x.mau != 0)
		return 1;
	return 0;
}

int ktToiGian(PHANSO x)
{
	if (UCLN(x.tu, x.mau) == 1)
		return 1;
	return 0;
}

int ktDuong(PHANSO x)
{
	if (x.tu * x.mau > 0)
		return 1;
	return 0;
}

int ktAm(PHANSO x)
{
	if (x.tu * x.mau < 0)
		return 1;
	return 0;
}

void QuyDongMau(PHANSO& x, PHANSO& y)
{
	int mc = x.mau * y.mau;
	x.tu = x.tu * y.mau;
	y.tu = x.mau * y.tu;
	x.mau = mc;
	y.mau = mc;
}

void QuyDongTu(PHANSO& x, PHANSO& y)
{
	int tc = x.tu * y.tu;
	x.mau = x.mau * y.tu;
	y.mau = y.mau * x.tu;
	x.tu = tc;
	y.tu = tc;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.tu / x.mau;
	float b = (float)y.tu / y.mau;
	if (a > b)
		return 1;
	if (a < b)
		return - 1;
	return 0;
}

PHANSO operator+ (PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau + y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

PHANSO operator- (PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau - y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

PHANSO operator* (PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.tu;
	temp.mau = x.mau * y.mau;
	RutGon(temp);
	return temp;
}

PHANSO operator/ (PHANSO x, PHANSO y)
{
	PHANSO	temp;
	temp.tu = x.tu * y.mau;
	temp.mau = x.mau * y.tu;
	RutGon(temp);
	return temp;
}

//TEMP
PHANSO clone(PHANSO x)
{
	PHANSO temp;
	temp.tu = x.tu;
	temp.mau = x.mau;
	return temp;
}
