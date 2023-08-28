#include <iostream>
using namespace std;
const double PI = 3.14159;
template <typename T>
class circle
{
    T radius;
    static int total; //类模板的静态数据成员
public:
    circle(T r = 0)
    {
        radius = r;
        total++;
    }
    void set(T r)
    {
        radius = r;
    }
    double ra()
    {
        return radius;
    }
    double girth()
    {
        return 2 * PI * radius;
    }
    double area() //类模板的静态成员函数
    {
        return PI * radius * radius;
    }
    static int show();
};
template <typename T>
int circle<T>::total = 0;
template <typename T>
int circle<T>::show()
{
    return total;
}
int main()
{
    circle<int> A, B; //创建了两个对象
    A.set(16);
    cout << "A.radius=" << A.ra() << endl;
    cout << "A.girth=" << A.girth() << endl;
    cout << "A.area=" << A.area() << endl;
    B.set(105);
    cout << "B.radius=" << B.ra() << endl;
    cout << "B.girth=" << B.girth() << endl;
    cout << "B.area=" << B.area() << endl;
    cout << "Total1=" << circle<int>::show << endl; //显示创建的对象数
    cout << endl;
    circle<double> x(6.23), y(10.5), z(25.6); //创建了三个对象
    cout << "x.radius=" << x.ra() << endl;
    cout << "x.girth=" << x.girth() << endl;
    cout << "x.area=" << x.area() << endl;
    cout << "y.radius=" << y.ra() << endl;
    cout << "y.girth=" << y.girth() << endl;
    cout << "y.area=" << y.area() << endl;
    cout << "z.radius=" << z.ra() << endl;
    cout << "z.girth=" << z.girth() << endl;
    cout << "z.area=" << z.area() << endl;
    cout << "Total2=" << circle<double>::show() << endl; //显示创建的对象数
}