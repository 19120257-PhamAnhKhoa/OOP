#include "CCircle.h"

int main()
{
	CCircle dt;
	dt.Nhap();
	dt.Xuat();
	dt.move(3, 5);
	dt.Xuat();
	cout << "Chu vi duong tron tam O:" << dt.getPerimeter() << endl;
	cout << "Dien tich duong tron tam O:" << dt.getArea();
}