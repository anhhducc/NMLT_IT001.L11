#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Bai 171
struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int ktHopLe(NGAY);
int SoSanh(NGAY, NGAY);
int STTNgayTrongNam(NGAY);
int STTNgay(NGAY);
void XuatThu(NGAY);
int KhoangCach(NGAY, NGAY);
NGAY TimNgay(int, int);
NGAY TimNgay(int);
NGAY KeTiep(NGAY);
NGAY TruocDo(NGAY);
NGAY KeTiep(NGAY, int);
NGAY TruocDo(NGAY, int);

int main()
{

	// Bai 172
	NGAY x;
	cout << "\n Nhap ngay: ";
	Nhap(x);

	// Bai 173
	cout << "\nNgay vua nhap: ";
	Xuat(x);
	cout << endl;

	// Bai 174
	cout << "\nCheck nam cua ngay co la nam nhuan ko: " << ktNhuan(x);
	cout << endl;

	// Bai 175
	cout << "\nSo ngay toi da trong thang cua ngay x: " << int(SoNgayToiDaTrongThang(x));
	cout << endl;

	// Bai 176
	cout << "\nSo ngay toi da trong nam cua ngay x: " << int(SoNgayToiDaTrongNam(x));
	cout << endl;

	// Bai 177
	cout << "\nCheck tinh hop le cua ngay: " << ktHopLe(x);
	cout << endl;

	// Bai 178
	cout << "\nSo sanh 2 ngay";
	int a, b;
	cout << "\nNhap ngay 1: "; cin >> a;
	cout << "\nNhap ngay 2: "; cin >> b;
	cout << "\nSo sanh: " << SoSanh(a, b);
	cout << endl;

	// Bai 179
	cout << "\n STT ngay trong nam: " << STTNgayTrongNam(x);
	cout << endl;

	// Bai 180
	cout << "\n STT ngay ke tu 01/01/01 :" << STTNgay(x);
	cout << endl;

	// Bai 181
	cout << "\nXuat thu cua ngay: ";
	XuatThu(x);
	cout << endl;

	// Bai 182
	NGAY y;
	cout << "\nNhap ngay y: ";
	Nhap(y);
	cout << "\nKhoang cach giua 2 ngay: " << KhoangCach(x,y);

	// Bai 183
	NGAY z;
	z = TimNgay(x, y);
		cout << "\n Ngay can tim: ";
	Xuat(z);
	cout << endl;

	// Bai 184
	NGAY t;
	t = TimNgay(x);
		cout << "\n Ngay can tim la: ";
	Xuat(t);
	cout << endl;

	// Bai 185
	NGAY h;
	h = KeTiep(x);
	cout << "\n Ngay ke tiep la: ";
	Xuat(h);
	cout << endl;

	// Bai 186
	NGAY g;
	g = TruocDo(x);
	cout << "\n Ngay truoc do la: ";
	Xuat(g);
	cout << endl;

	// Bai 187
	NGAY j;
	int k;
	cout << "\nNhap k ngay: ";
	cin >> k;
	j = KeTiep(j, k);
	cout << "\n Ngay can tim la: ";
	Xuat(j);
	cout << endl;

	// Bai 188
	NGAY l;
	int q;
	cout << "\nNhap k ngay: ";
	cin >> q;
	l = TruocDo(q, l);
	cout << "\n Ngay can tim la: ";
	Xuat(l);


	return 1;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.ng;
	cout << "\nNhap thang: ";
	cin >> x.th;
	cout << "\nNhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm;
}


int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];

}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int ktHopLe(NGAY x)
{
	if (x.nm < 1)
		return 0;
	if (x.th < 1)
		return 0;
	if (x.th > 12)
		return 0;
	if (x.ng < 1)
		return 0;
	if (x.ng > SoNgayToiDaTrongThang[x.th - 1])
		return 0;
	return 1;
}

int SoSanh(NGAY x, NGAY y)
{
	if (x.nm > y.nm)
		return 1;
	if (x.nm < y.nm)
		return -1;
	if (x.th > y.th)
		return 1;
	if (x.th < y.th)
		return -1;
	if (x.ng > y.ng)
		return 1;
	if (x.ng < y.ng)
		return -1;
	return 0;
}

int STTNgayTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.th - 1; i++)
	{
		NGAY temp = { 1,i,x.nm };
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ng);
}

int STTNgay(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.nm - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoNgayToiDaTrongNam(x));
}

void XuatThu(NGAY x)
{
	int stt = STTNgay(x);
	switch (stt % 7)
	{
	case 0: cout << "Chu nhat";
		break;
	case 1: cout << "Thu hai";
		break;
	case 2: cout << "Thu ba";
		break;
	case 3: cout << "Thu tu";
		break;
	case 4: cout << "Thu nam";
		break;
	case 5: cout << "Thu sau";
		break;
	case 6: cout << "Thu bay";
		break;
	}
}

int KhoangCach(NGAY x, NGAY y)
{
	int a = STTNgay(x);
	int b = STTNgay(y);
	return abs(a - b);
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.th = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}

NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

NGAY KeTiep(NGAY x)
{
	int stt = STTNgay(x);
	stt = stt + 1;
	return TimNgay(stt);
}

NGAY TruocDo(NGAY x)
{
	if (x.ng == 1 && x.th == 1 && x.nm == 1)
		return x;
	int stt = STTNgay(x);
	stt--;
	return TimNgay(stt);
}

NGAY KeTiep(NGAY x, int k)
{
	int stt = STTNgay(x);
	stt = stt + k;
	return TimNgay(stt);
}

NGAY TruocDo(NGAY x, int k)
{
	NGAY temp = x;
	for (int i = 1; i <= k; i++)
		temp = TruocDo(temp);
	return temp;
}
