#include "CStudent.h"

int main()
{
	float dtb;
	CStudent student;
	student.Nhap();
	student.Xuat();
	dtb = student.avarageScore();
	cout << "Diem trung binh cua hoc sinh:" << dtb << endl;
	student.Ranking(dtb);
}