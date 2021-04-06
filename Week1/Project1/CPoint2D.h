#pragma once
#include <iostream>
using namespace std;

class CPoint2D
{
private:
	int x;
	int y;
public:
	void Nhap();
	void Xuat();
	CPoint2D(void);
	~CPoint2D();
};

