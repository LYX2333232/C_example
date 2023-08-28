#include <iostream>
using namespace std;
class figure
{
protected:
    double x, y;

public:
    void set_dim(double i, double j = 0)
    {
        x = i;
        y = j;
    }
    virtual void show_area() const = 0; //定义虚构函数
};
class triangle : public figure
{
public:
    void show_area() const
    {
        cout << "triangle with high " << x << " and base " << y;
        cout << " has an area of " << x * y * 0.5 << "\n";
    }
};
class square : public figure
{
public:
    void show_area() const
    {
        cout << "square with dimension " << x << " * " << y;
        cout << " has an area of " << x * y << '\n';
    }
};
class circle : public figure
{
public:
    void show_area() const
    {
        cout << "circle with radius " << x;
        cout << " has an area of " << 3.14 * x * x << "\n";
    }
};