#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&, float&, float&);
float ktTonTai(float, float, float, float, float, float, float, float);

int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;

	Nhap(xA, yA, xB, yB, xC, yC, xM, yM);
	float kq = ktTonTai(xA, yA, xB, yB, xC, yC, xM, yM);

	if (kq == 1)
		cout << "M thuoc tam giac" << endl;
	else
		cout << "M khong thuoc tam giac" << endl;
	return 1;
}
void Nhap(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC, float& xM, float& yM)
{
	cout << "Nhap toa do diem A: ";
	cin >> xA >> yA;
	cout << "Nhap toa do diem B: ";
	cin >> xB >> yB;
	cout << "Nhap toa do diem C: ";
	cin >> xC >> yC;
	cout << "Nhap toa do diem M: ";
	cin >> xM >> yM;
}
float ktTonTai(float xA, float yA, float xB, float yB, float xC, float yC, float xM, float yM)
{
	float SABC = 1 / 2 * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	float SMAB = 1 / 2 * abs(xM * yA + xA * yB + xB * yM - xA * yM - xB * yA - xM * yB);
	float SMBC = 1 / 2 * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	float SMCA = 1 / 2 * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	if (SABC == (SMAB + SMBC + SMCA))
		return 1;
	else
		return 0;
}