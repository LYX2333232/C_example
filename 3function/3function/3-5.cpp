#include <iostream>
using namespace std;
void count(int x, int y) //定义函数，x、y为传值参数，接收实参的值
{
    x = x * 2; //在形参x上操作
    y = y * y; //在形参y上操作
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}
int main()
{
    int a = 3, b = 4;
    count(a, b); //调用函数，a、b的值分别传递给x、y
    cout << "a=" << a << '\t';
    cout << "b=" << b << endl;
}