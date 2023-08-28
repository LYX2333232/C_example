#include <iostream>
using namespace std;
//在c++中定义变量
const double PI = 3.1415926;
//在c++中定义内联函数
inline double area(double r) { return PI * r * r; }
int main()
{
    double x, s;
    x = 3.6;
    s = area(x);
    cout << "s=" << s << endl;
}