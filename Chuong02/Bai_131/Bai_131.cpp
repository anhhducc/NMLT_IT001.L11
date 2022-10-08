#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&);
float ktTonTai(float, float, float, float, float, float);

int main()
{
	float xA, yA, xB, yB, xC, yC;

	Nhap(xA, yA, xB, yB, xC, yC);
	float kq = ktTonTai(xA, yA, xB, yB, xC, yC);

	if (kq == 1)
		cout << "La ba dinh cua mot tam giac" << endl;
	else
		cout << "Khong la ba dinh cua mot tam giac" << endl;
	return 1;
}
void Nhap(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC)
{
	cout << "Nhap toa do diem A: ";
	cin >> xA >> yA;
	cout << "Nhap toa do diem B: ";
	cin >> xB >> yB;
	cout << "Nhap toa do diem C: ";
	cin >> xC >> yC;
}
float ktTonTai(float xA, float yA, float xB, float yB, float xC, float yC)
{
	float a = sqrt((xB - xC) * (xB - xC) + (yB - yC) * (yB - yC));
	float b = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	float c = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
	if (a + b >= c && a + c >= b && b + c >= a)
		return 1;
	else
		return 0;
}