#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double PI = 3.1415926535;
    double x, y;
    x = PI / 2;
    y = sin(x); //调用标准函数
    cout << "sin(" << x << ")=" << y << endl;
    y = cos(x); //调用标准函数
    cout << "cos(" << x << ")=" << y << endl;
}