#pragma once
#include "CPoint2D.h"

class CCircle
{
private:
	CPoint2D m_pt2DCenter;
	double m_dRadius;
public:
	CCircle();
	~CCircle();
	void Nhap();
	void Xuat();
	void move(int x,int y);
	double getPerimeter();
	double getArea();
};

