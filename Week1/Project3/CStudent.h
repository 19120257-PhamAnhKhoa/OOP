#pragma once
#include <iostream>
#include <string>
using namespace std;


class CStudent
{
private:
	string hoTen;
	float diemToan;
	float diemVan;
public:
	CStudent();
	~CStudent();
	void Nhap();
	void Xuat();
	string GetName();
	float getToan();
	float getVan();
	void setName(string);
	void setToan(float);
	void setVan(float);
	float avarageScore();
	void Ranking(float);
};

