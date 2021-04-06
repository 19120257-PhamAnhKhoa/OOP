#include "CStaticArray.h"

int main()
{
	int n = 0, idx = 0, val = 0;
	do
	{
		cout << "Nhap vao n la so phan tu trong mang:";
		cin >> n;
	} while (n > 100);
	CStaticArray arr(n);
	arr.Nhap();
	cout << "Mang da nhap vao la:" << endl;
	arr.Xuat();
	do
	{
		cout << "Nhap vao vi tri muon lay gia tri (Nhap vao idx<n):";
		cin >> idx;
	} while (idx > n);
	cout << arr.getterI(idx) << endl;
	do
	{
		cout << "Nhap vao vi tri muon gan gia tri (Nhap vao idx<n):";
		cin >> idx;
	} while (idx > n);
	cout << "Nhap vao gia tri muon gan:";
	cin >> val;
	arr.setterI(idx, val);
	cout << "Mang sau khi gan gia tri val vao vi tri idx la:" << endl;
	arr.Xuat();
	system("pause");
	system("cls");
	cout << "Mang sau khi gan gia tri tai idx" << endl;
	arr.Xuat();
	cout << "Gia tri lon nhat la:" << arr.findMax() << endl;
	cout << "Gia tri nho nhat la:" << arr.findMin() << endl;
	cout << "Mang sau khi sap xep theo thu tu tang dan:" << endl;
	arr.sortAsc();
	arr.Xuat();
	cout << "Mang sau khi sap xep theo thu tu giam dan:" << endl;
	arr.sortDes();
	arr.Xuat();
	return 0;
}