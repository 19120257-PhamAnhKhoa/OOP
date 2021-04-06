#include "CCircle.h"

CCircle::CCircle()
{
	m_dRadius = 0;
}

CCircle::~CCircle()
{
}

void CCircle::Nhap()
{
	m_pt2DCenter.Nhap();
	cout << "Nhap vao ban kinh r:";
	cin >> m_dRadius;
}

void CCircle::Xuat()
{
	int x = m_pt2DCenter.getterX();
	int y = m_pt2DCenter.getterY();
	cout << "Duong tron tam 0 (" << x << "," << y << ") ban kinh " << m_dRadius << endl;
}

void CCircle::move(int a, int b)
{
	int x = m_pt2DCenter.getterX() + a;
	int y = m_pt2DCenter.getterY() + b;
	m_pt2DCenter.setterX(x);
	m_pt2DCenter.setterY(y);
}

double CCircle::getPerimeter()
{
	return 2.0*m_dRadius * Pi;
}

double CCircle::getArea()
{
	return m_dRadius * m_dRadius * Pi;
}





