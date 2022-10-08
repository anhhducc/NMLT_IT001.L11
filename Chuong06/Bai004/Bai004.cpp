#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;

void Nhap(string, float*, int&);
void Xuat(float*, int);

int main()
{
	int n;
	cout << "\nNhap n: " << endl;
	cin >> n;
	float* a;
	a = new float[n];
	string filename = "input.inp";
	Nhap(filename, a, n);
	Xuat(a, n);
	delete[]a;
	return 1;
}

void Nhap(string filename, float* a, int& n)
{
	ifstream myfile(filename);
	myfile >> n;
	for (int i = 0; i < n; i++)
		myfile >> setw(6) >> a[i];
}

void Xuat(float* a, int n)
{
	cout << "Mang trong file la: " << n << endl;
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}