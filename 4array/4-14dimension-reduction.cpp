#include <iostream>
using namespace std;
const int M = 4, N = 3;
int sum(int *, int, int, int);
int main()
{
    int total, a[M][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    total = sum(a[0], 3, 1, 3); //向函数传送数组第一个元素地址
    cout << "total row 1-3 :" << total << endl;
}
int sum(int *pa, int col, int i, int j) // pa是一级指针
{
    int t = 0, *p;
    for (p = pa + col * i; p < pa + col * (j + 1); p++) //计算地址偏移
        t += *p;
    return t;
}