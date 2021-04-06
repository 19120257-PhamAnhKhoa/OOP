#pragma once
#define Pi 3.14
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
	CPoint2D();
	~CPoint2D();
	void setterX(int k);
	int getterX();
	void setterY(int k);
	int getterY();
};

