#include <iostream>
using namespace std;
int main()
{
    double aa[2] = {1.1, 2.2}, bb[2] = {3.3, 4.4}, cc[2] = {5.5, 6.6};
    double *pf[3]; //定义指针数组
    pf[0] = aa;    //取数组地址
    pf[1] = bb;
    pf[2] = cc;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << *(pf[i] + j) << " "; //输出各数组元素
        cout << endl;
    }
}