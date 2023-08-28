#include <iostream>
#include <cmath>
using namespace std;
typedef double ftype(double);             //定义函数类型
double func(ftype *f, double l, double u) // f是函数指针参数
{
    double d, s = 0.0;
    for (d = 1; d <= u; d += 0.1)
        s += f(d);
    return s;
}
int main()
{
    double sum;
    sum = func(sin, 0.0, 1.0); //库函数sin作为实参
    cout << "the sum of sin from 0.0 to 1.0 is :" << sum << endl;
    sum = func(cos, 0.0, 1.0); //库函数cos作为实参
    cout << "the sum of cos from 0.0 to 1.0 is :" << sum << endl;
}