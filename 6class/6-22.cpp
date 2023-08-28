#include <iostream>
#include <cmath>
using namespace std;
class point
{
public:
    point(int xi = 0, int yi = 0)
    {
        x = xi;
        y = yi;
    }
    int getx() { return x; }
    int gety() { return y; }

private:
    int x;
    int y;
};
class Distance
{
public:
    Distance(point xp1, point xp2);
    double get() { return dist; }

private:
    point p1, p2; // point类数据成员
    double dist;  //记录距离的数据成员
};
Distance::Distance(point xp1, point xp2) : p1(xp1), p2(xp2) //构造函数计算距离
{
    double x = double(p1.getx() - p2.getx());
    double y = double(p1.gety() - p2.gety());
    dist = sqrt(x * x + y * y);
}
int main()
{
    point mp1(5, 10), mp2(20, 30);
    Distance mdist(mp1, mp2);
    cout << "The distance is " << mdist.get() << endl;
}