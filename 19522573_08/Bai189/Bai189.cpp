#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);

int main()
{
	DIEM a[100];
	int n;

	Nhap(a, n); 
	return 1;

}

void Nhap(DIEM& a)
{
	cout << "Nhap x: "; cin >> a.x;
	cout << "Nhap y: "; cin >> a.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}
