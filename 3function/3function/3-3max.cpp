#include <iostream>
using namespace std;
double max(double, double); //声明函数原型
int main()
{
    double a, b, c, m1, m2;
    cout << "input a,b,c:\n";
    cin >> a >> b >> c;
    m1 = max(a, b);  //调用函数
    m2 = max(m1, c); //调用函数
    cout << "Maximum=" << m2 << endl;
}
double max(double x, double y) //定义函数
{
    if (x > y)
        return x;
    else
        return y;
}