#include <iostream>
#include <cmath>
using namespace std;
class point
{
public:
    point(double xi, double yi)
    {
        x = xi;
        y = yi;
    }
    double getx() { return x; }
    double gety() { return y; }
    friend double distance(point &a, point &b); //声明友元
private:
    double x, y;
};
double distance(point &a, point &b) //定义友元函数
{
    double dx = a.x - b.x; //通过参数访问对象成员
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}
int main()
{
    point p1(3.0, 5.0), p2(4.0, 6.0);
    double d = distance(p1, p2); //调用友元函数
    cout << "This distance is " << d << endl;
}