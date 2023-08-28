#include <iostream>
using namespace std;
#include "Array.h"
int main()
{
    Array<int> IntAry(5); //用int进行实例化，建立模板类对象
    int i;
    for (i = 0; i < 5; i++)
        IntAry.Enter(i, i);
    cout << "IntAry Array:\n";
    for (i = 0; i < 5; i++)
        cout << IntAry.Entry(i) << "\t";
    cout << endl;
    Array<double> DouAry(5); //用double进行实例化，建立模板类对象
    for (i = 0; i < 5; i++)
        DouAry.Enter(i, (i + 1) * 0.35);
    cout << "Double Array:\n";
    for (i = 0; i < 5; i++)
        cout << DouAry.Entry(i) << "\t";
    cout << endl;
}