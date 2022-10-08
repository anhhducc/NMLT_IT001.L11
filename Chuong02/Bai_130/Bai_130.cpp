#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&);
float ktTonTai(float, float, float);

int main()
{
	float x, y, z;

	Nhap(x, y, z);
	float kq = ktTonTai(x, y, z);

	if (kq == 1)
		cout << "Ton tai tam giac" << endl;
	else
		cout << "Khong ton tai tam giac" << endl;
	return 1;
}
void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}
float ktTonTai(float x, float y, float z)
{
	if (abs(y - z) < x && y + z >= x)
		return 1;
	else
		return 0;
}