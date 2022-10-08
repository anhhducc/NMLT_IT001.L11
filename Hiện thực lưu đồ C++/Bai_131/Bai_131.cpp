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
	float AB = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	float BC = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
	float AC = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	if (AB < BC + AC && abs(BC - AC) < AB)
		cout << "La 3 dinh cua tam giac";
	else
		cout << "Khong la 3 dinh cua tam giac";
	return 1;
}