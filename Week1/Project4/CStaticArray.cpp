#include "CStaticArray.h"

CStaticArray::CStaticArray(int k)
{
    n = k;
    a = new int[n]; 
}

CStaticArray::~CStaticArray()
{
    delete[]a;
}

void CStaticArray::Nhap()
{
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]=";
        cin >> a[i];
    }
}

void CStaticArray::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]=" << a[i] << endl;
    }
}

int CStaticArray::getterN()
{
    return n;
}

void CStaticArray:: setterI(int idx, int val)
{
    if (idx < n)
    {
        a[idx] = val;
    }

}

int CStaticArray::getterI(int idx)
{
    if (idx < n)
        return a[idx];
    return 0;
}

int CStaticArray::find(int val)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
            return i;
    }
    return -1;
}

int CStaticArray::findMax()
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int CStaticArray::findMin()
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}

void CStaticArray::sortAsc()
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }
}

void CStaticArray::sortDes()
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}
