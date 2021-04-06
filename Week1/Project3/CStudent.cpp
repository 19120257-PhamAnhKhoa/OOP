#include "CStudent.h"

CStudent::CStudent()
{
	hoTen = "0";
	diemToan = 0;
	diemVan = 0;
}

CStudent::~CStudent()
{
}

void CStudent::Nhap()
{
	cout << "Nhap vao ho ten:";
	getline(cin, hoTen);
	cout << "Nhap vao diem toan:";
	cin >> diemToan;
	cout << "Nhap vao diem van:";
	cin >> diemVan;
}

void CStudent::Xuat()
{
	cout << "Ho va ten:" << hoTen << endl;
	cout << "Diem Toan:" << diemToan << endl;
	cout << "Diem Van:" << diemVan << endl;
}

string CStudent::GetName()
{
	return string();
}

float CStudent::getToan()
{
	return 0.0f;
}

float CStudent::getVan()
{
	return 0.0f;
}

void CStudent::setName(string str)
{
	hoTen = str;
}

void CStudent::setToan(float n)
{
	diemToan = n;
}

void CStudent::setVan(float n)
{
	diemVan = n;
}

float CStudent::avarageScore()
{
	return (diemToan + diemVan) / 2.0;
}

void CStudent::Ranking(float avg)
{
	cout << "Xep loai: ";
	if (avg >= 9)
	{
		cout << "Xuat sac" << endl;
	}
	else if (avg >= 8)
		cout << "Gioi" << endl;
	else if (avg >= 6.5)
		cout << "Kha" << endl;
	else if (avg >= 5)
		cout << "Trung Binh" << endl;
	else
		cout << "Yeu" << endl;
}
