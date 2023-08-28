#include <iostream>
using namespace std;
class point
{
protected:
    double x, y;

public:
    point(double t1, double t2)
    {
        x = t1;
        y = t2;
    }
    void outP()
    {
        cout << "point:x=" << x << "y=" << y << endl;
    }
};
class circle : public point // circle类继承point类
{
protected:
    double radius; //派生类数据成员
public:
    circle(double t1, double t2, double t3) : point(t1, t2) //调用基类构造函数
    {
        radius = t3; //对自身数据成员赋值
    }
    void outcircle()
    {
        point::outP(); //调用基类的成员函数
        cout << "radius=" << radius << endl;
    }
};
int main()
{
    circle c(0, 0, 12.5);
    c.outP();      //调用从基类point 继承的成员函数
    c.outcircle(); //调用circle 类成员函数
}