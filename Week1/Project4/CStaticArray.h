#pragma once
#include <iostream>
using namespace std;

class CStaticArray
{
private:
	int* a;
	int n;
public:
	CStaticArray(int);
	~CStaticArray();
	void Nhap();
	void Xuat();
	int getterN();
	void setterI(int,int);
	int getterI(int);
	int find(int);
	int findMax();
	int findMin();
	void sortAsc();
	void sortDes();

};


