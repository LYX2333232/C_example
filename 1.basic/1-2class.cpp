#include <iostream>
using namespace std;
class circle //说明类
{
    double radius; //类的数据成员

public: //类的成员函数
    void set_radius(double r)
    {
        radius = r;
    }
    double get_radius()
    {
        return radius;
    }
    double get_girth()
    {
        return 2 * 3.14 * radius;
    }
    double get_area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    circle a, b; //说明对象
    a.set_radius(6.23);
    cout << "a.radius=" << a.get_radius() << endl;
    cout << "a.girth=" << a.get_girth() << endl;
    cout << "a.area=" << a.get_area() << endl;
    b.set_radius(10.5);
    cout << "b.radius=" << b.get_radius() << endl;
    cout << "b.girth=" << b.get_girth() << endl;
    cout << "b.area=" << b.get_area() << endl;
}