#include <iostream>
#include <cmath>
using namespace std;

struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);

int main()
{
	SOPHUC b[100][100];
	int m, n;
	Nhap(b, m, n);
	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << endl;
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
	cout << "Nhap phan ao: ";
	cin >> x.ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "\Nhap so hang: "; cin >> m;
	cout << "\nNhap so cot: "; cin >> n;
	for ( int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}
