#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Xuat(int[], int);
void Nhap(string, int[], int&);

int main()
{
	int b[100];
	int k, l;
	string filename = "input.txt";
	Nhap(filename, b, l);
	Xuat(b, l);
	return 0;
}
void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << a[i] << "  ";
}
void Nhap(string filename, int a[], int& n)
{
	ifstream myfile(filename);
	myfile >> n;
	for (int i = 0; i <= n - 1; i++)
		myfile >> a[i];
}