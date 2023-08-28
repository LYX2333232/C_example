#include <iostream>
using namespace std;
int main()
{
    int a = 2345;
    int *pa;
    int &ra = a;
    pa = &a;
    cout << a << '\t' << ra << '\t' << *pa << endl;      //输出a的值
    cout << (&a) << '\t' << (&ra) << '\t' << pa << endl; //输出a的地址
    cout << (&pa) << endl;                               //输出指针pa的地址
}