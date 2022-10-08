#include<iostream>
#include<cmath>
using namespace std;
int DinhDang(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap z = ";
	cin >> z;

	int test = DinhDang(x, y, z);
	if (test == 1)
		cout << "Tam giac deu" << endl;
	if (test == 2)
		cout << "Tam giac vuong can" << endl;
	if (test == 3)
		cout << "Tam giac vuong" << endl;
	if (test == 4)
		cout << "Tam giac can" << endl;
	if (test == 5)
		cout << "Tam giac thuong" << endl;
	if (test == 6)
		cout << "Khong la tam giac " << endl;
	return 0;
}
int DinhDang(float x, float y, float z)
{
	if (x + y > z && y + z > x && x + z > y)
	{
		if (x == y && y == z && x == z)
			return 1;
		else
			if (x * x + y * y == z * z || y * y + z * z == x * x || x * x + z * z == y * y)
			{
				if (x == y || y == z || x == z)
					return 2;
				else
					return 3;
			}
			else
			{
				if (x == y || y == z || x == z)
					return 4;
				else
					return 5;
			}
	}
	else
		return 6;
}