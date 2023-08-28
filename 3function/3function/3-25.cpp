#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;
double perimeter(double radius)
{
    return 2 * PI * radius;
}
double area(double radius)
{
    return PI * radius * radius;
}
double ballarea(double radius)
{
    return 4 * PI * radius * radius;
}
double volume(double radius)
{
    return 4.0 / 3 * PI * pow(radius, 3);
}
int main()
{
    double (*pf)(double); //定义函数指针
    double r, cp, ca, ba, bv;
    cout << "enter the radius of a circle:";
    cin >> r;
    pf = perimeter; //获取函数地址
    cp = pf(r);     //等价于perimeter(r)
    pf = area;      //获取函数地址
    ca = pf(r);     //等价于area(r)
    cout << "the perimeter of circle is:" << cp << endl;
    cout << "the area of circle is:" << ca << endl;
    cout << "enter the radius of a ball :";
    cin >> r;
    pf = ballarea; //获取函数地址
    ba = pf(r);    //等价于ballarea(r)
    pf = volume;   //获取函数地址
    bv = pf(r);    //等价于volume(r)
    cout << "the area of ball is :" << ba << endl;
    cout << "the volume of ball is :" << bv << endl;
}