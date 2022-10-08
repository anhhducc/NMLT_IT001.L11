#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(string, float[], int&);
void Xuat(float[], int);

int main()
{
	float b[100];
	int k;
	string filename = "input.inp";
	Nhap(filename, b, k);
	Xuat(b, k);
	return 1;
}

void Nhap(string filename, float a[], int& n)
{
	ifstream myfile(filename);
	myfile >> n;
	for (int i = 0; i < n; i++)
		myfile >> setw(6) >> a[i];
}

void Xuat(float a[], int n)
{
	cout << "Mang trong file la: " <<n<< endl;
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}