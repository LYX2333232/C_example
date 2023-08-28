#include <iostream>
using namespace std;
int a = 1, b = 1; // a和b的作用域开始
void f1(int x)    // f1函数可以访问a和b
{
    a = x * x;
    b = a * x;
    return;
}
int c;                // c的作用域从这里开始，默认初值为0
void f2(int x, int y) // f2函数可以访问a,b,c
{
    a = x > y ? x : y;
    b = x < y ? x : y;
    c = x + y;
    return;
}
int main()
{
    f1(4); // main函数可以访问a,b,c
    cout << "call function f1:\n";
    cout << "a=" << a << ",b=" << b << endl;
    f2(10, 23);
    cout << "call function f2:\n";
    cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
}