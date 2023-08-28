#include <iostream>
#include <cmath>
using namespace std;
//函数原型指定默认参数值
double dist(double, double, double = 0, double = 0);
int main()
{
    double x1, x2, y1, y2;
    cout << "Enter point(x1,y1):";
    cin >> x1 >> y1;
    cout << "Enter point(x2,y2):";
    cin >> x2 >> y2;
    cout << "The distance of(" << x1 << "," << y1 << ")to(" << x2 << "," << y2 << "):" << dist(x1, y1, x2, y2) << endl; //使用指定参数值
    cout << "The distance of(" << x1 << "," << y1 << ")to(" << 0 << "," << 0 << "):" << dist(x1, y1) << endl;           //使用默认参数值,x2,y2为0
    cout << "The distance of(" << x1 << "," << y1 << ")to(" << x2 << "," << 0 << "):" << dist(x1, y1, x2) << endl;      //使用默认参数值,y2为0
}
double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}