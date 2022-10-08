#include<iostream>
#include<iomanip>
using namespace std;

struct ngay
{
	int Ng;
	int Th;
	int Nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Nhap(NGAY[], int&);
void Xuat(NGAY);
void Xuat(NGAY[], int);
int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);
void GanNhauNhat(NGAY[], int, NGAY&, NGAY&);

int main()
{
	NGAY b[100];
	int k;
	NGAY x, y;

	Nhap(b, k);
	cout << endl;
	cout << "Mang ban dau: " << endl;
	Xuat(b, k);
	cout << "\n2 ngay gan nhau nhat: " << endl;
	GanNhauNhat(b, k, x, y);
	return 1;
}

void Nhap(NGAY& x)
{
	cout << endl;
	cout << "Nhap ngay: ";
	cin >> x.Ng;
	cout << "Nhap thang: ";
	cin >> x.Th;
	cout << "Nhap nam: ";
	cin >> x.Nm;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ng;
	cout << "\nThang: " << x.Th;
	cout << "\nNam: " << x.Nm;
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		cout << "Ngay a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}

int ktNhuan(NGAY x)
{
	if ((x.Nm % 4 == 0 && x.Nm % 100 != 0) || x.Nm % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.Th - 1];
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x) == 1)
		return 366;
	return 365;
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Th - 1; i++)
	{
		NGAY temp = { 1,i,x.Nm };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ng);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nm - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt += SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}

void GanNhauNhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
	Xuat(x);
	cout << endl;
	Xuat(y);
}
