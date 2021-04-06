#include "CPoint2D.h"

void CPoint2D::Nhap()
{
	cout << "Nhap vao x:";
	cin >> x;
	cout << "Nhap vao y:";
	cin >> y;
}

void CPoint2D::Xuat()
{
	cout << "Toa do diem nhap vao la: (" << x << "," << y << ")";
}

CPoint2D::CPoint2D()
{
	x = 0;
	y = 0;
}

CPoint2D::~CPoint2D()
{
}

void CPoint2D::setterX(int k)
{
	x = k;
}

int CPoint2D::getterX()
{
	return x;
}

void CPoint2D::setterY(int k)
{
	y = k;
}

int CPoint2D::getterY()
{
	return y;
}
