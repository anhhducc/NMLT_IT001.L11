#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 134
struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC Tich(DONTHUC, DONTHUC);
DONTHUC Thuong(DONTHUC, DONTHUC);
DONTHUC DaoHam(DONTHUC);
DONTHUC DaoHam(DONTHUC, int);
float TinhGiaTri(DONTHUC, float);
DONTHUC operator*(DONTHUC, DONTHUC);
DONTHUC operator/(DONTHUC, DONTHUC);

int main()
{
	// Bai 135
	DONTHUC(a);
	DONTHUC(b);
	cout << "\nNhap don thuc f: ";
	Nhap(a);
	cout << "\nNhap don thuc g: ";
	Nhap(b);

	// Bai 136
	cout << "\nDon thuc f: ";
	Xuat(a);
	cout << endl;
	cout << "\nDon thuc g: ";
	Xuat(b);
	cout << endl;

	// Bai 137
	DONTHUC A = Tich(a, b);
	cout << "\nTich 2 don thuc: ";
	Xuat(A);
	cout << endl;

	// Bai 138
	DONTHUC B = Thuong(a, b);
	cout << "\nThuong 2 don thuc: ";
	Xuat(B);
	cout << endl;

	// Bai 139
	DONTHUC C = DaoHam(a);
	cout << "\nDao ham cap 1 don thuc f: ";
	Xuat(C);
	DONTHUC C1 = DaoHam(b);
	cout << "\nDao ham cap 1 don thuc g: ";
	Xuat(C1);
	cout << endl;

	// Bai 140
	cout << "\nNhap bac dao ham k: ";
	int k;
	cin >> k;
	DONTHUC D = DaoHam(a, k);
	cout << "\nDao ham cap " << k << " cua don thuc f: ";
	Xuat(D);
	DONTHUC D1 = DaoHam(b, k);
	cout << "\nDao ham cap " << k << " cua don thuc g: ";
	Xuat(D1);
	cout << endl;

	// Bai 141
	cout << "\nNhap vi tri: ";
	int x;
	cin >> x;
	cout << "\nGia tri dao ham a va b: ";
	int gt_a = TinhGiaTri(a, x);
	cout << gt_a;
	int gt_b = TinhGiaTri(b, x);
	cout << gt_b;
	cout << endl;

	// Bai 142
	DONTHUC A1 = a * b;
	cout << "\nDinh nghia toan tu tich 2 don thuc: ";
	Xuat(A);
	cout << endl;

	// Bai 143
	DONTHUC B1 = a / b;
	cout << "\nDinh nghia toan tu thuong 2 don thuc: ";
	Xuat(B);

	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "\nNhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
	cout << "\n";
}

DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}

DONTHUC Thuong(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}

DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

DONTHUC DaoHam(DONTHUC f, int k)
{
	DONTHUC temp = f;
	for (int i = 1; i <= k; i++)
	{
		temp = DaoHam(temp);
	}
	return temp;
}

float TinhGiaTri(DONTHUC f, float x)
{
	float T = 1;
	for (int i = 1; i <= f.n; i++)
		T = T * x;
	T = T * f.a;
	return T;
}

DONTHUC operator*(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}

DONTHUC operator/(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}