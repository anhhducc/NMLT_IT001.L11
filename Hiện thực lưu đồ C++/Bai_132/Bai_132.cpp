#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float xA, yA;
	cout << "Nhap A(xA,yA)= ";
	cin >> xA >> yA;
	float xB, yB;
	cout << "Nhap B(xB,yB)= ";
	cin >> xB >> yB;
	float xC, yC;
	cout << "Nhap C(xC,yC)= ";
	cin >> xC >> yC;
	float xM, yM;
	cout << "Nhap M(xM,yM)= ";
	cin >> xM >> yM;
	float SABC = 1 / 2 * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
	float SMAB = 1 / 2 * abs(xM * yA + xA * yB + xB * yM - xA * yM - xB * yA - xM * yB);
	float SMBC = 1 / 2 * abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC);
	float SMCA = 1 / 2 * abs(xM * yC + xC * yA + xA * yM - xC * yM - xA * yC - xM * yA);
	float S = SMAB + SMBC + SMCA;
	if (SABC == S)
		cout << "M thuoc tam giac";
	else
		cout << "M khong thuoc tam giac";
	return 1;
}
	