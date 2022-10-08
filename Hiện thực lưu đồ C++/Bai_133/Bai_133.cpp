#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x= ";
	cin >> x;
	float y;
	cout << "Nhap y= ";
	cin >> y;
	float z;
	cout << "Nhap z= ";
	cin >> z;
	if (x + y > z && y + z > x && x + z > y)
	{
		if (x == y && y == z)
			cout << "Tam giac deu";
		else
			if (x == y || y == z || x == z)
				cout << "Tam giac can";
			else
				if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
					if (x == y || x == z || y == z)
						cout << "Tam giac vuong can";
					else
						cout << "Tam giac vuong";
				else
					cout << "Tam giac thuong";
	}
	else cout << "Khong la tam giac";
	return 1;
}