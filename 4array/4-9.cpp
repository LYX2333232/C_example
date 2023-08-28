#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i, j, total = 0;
    int *p, (*pary)[4];                // pary是指向一维数组的指针
    for (p = a[0]; p < a[0] + 12; p++) //以一维数组形式访问二维数组
        total += *p;
    cout << "total=" << total << endl;
    for (i - 0; i < 3; i++)
    {
        pary = a + i;
        for (j = 0; j < 4; j++)
            cout << setw(4) << *(*pary + j); //以指向数组的指针访问二维数组
        cout << endl;
    }
}