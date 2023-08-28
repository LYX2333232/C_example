#include <iostream>
using namespace std;
int main()
{
    int a;
    char c;
    double x;
    a = 2.0 / 4; //把0.5赋给a
    x = 2.0 / 4; //把0.5赋给x
    cout << a << '\t' << x << endl;
    a = 3 + 'A'; //把68赋给a
    c = 3 + 'A'; //把68转换为字符'D',赋给c
    cout << a << '\t' << c << endl;
    cout << 3 + 'A' << endl; //表达式值为整型
}