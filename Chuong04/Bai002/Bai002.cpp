#include <iostream>
#include <iomanip>
#include <ctime>
#include <string.h>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void Xuat(string, float[][100], int, int);

int main()
{
	float b[100][100];
	int l, k;
	Nhap(b, k, l);
	Xuat(b, k, l);
	cout << "Xuat ra file:\n";
	string name = "data01.inp";
	Xuat(name, b, k, l);
	return 1;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j] = -100 + rand() / (RAND_MAX / (100.0 - (-100.0)));
		}
}

void Xuat(float a[][100], int m, int n)
{
	cout << "Mang thu duoc la: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
}

void Xuat(string filename, float a[][100], int m, int n)
{
	ofstream myfile(filename);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			myfile << setw(6) << a[i][j];
		}
		myfile << endl;
	}
}