#include <iostream>
using namespace std;
int main()
{
    long int a = 10, b = 20, t;
    long int *p1 = &a, *p2 = &b, *pt;   //用变量地址初始化指针变量
    cout << p1 << '\t' << p2 << endl;   //输出地址
    cout << *p1 << '\t' << *p2 << endl; //输出变量的值
    t = *p1;
    *p1 = *p2;
    *p2 = t; //交换变量的值
    cout << *p1 << '\t' << *p2 << endl;
    pt = p1;
    p1 = p2;
    p2 = pt; //交换指针变量的值（地址）
    cout << p1 << '\t' << p2 << endl;
    cout << *p1 << '\t' << *p2 << endl;
    cout << a << '\t' << b << endl;
}