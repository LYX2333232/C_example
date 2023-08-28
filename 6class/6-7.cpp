#include <iostream>
using namespace std;
class Location
{
public:
    Location(int xx = 0, int yy = 0);
    Location(const Location &p);
    ~Location();
    int getx() const
    {
        return x;
    }
    int gety() const
    {
        return y;
    }

private:
    int x, y;
};
Location::Location(int xx, int yy)
{
    x = xx;
    y = yy;
    cout << "Constructor Object.\n";
}
Location::Location(const Location &p) //拷贝构造函数
{
    x = p.x;
    y = p.y;
    cout << "Copy_constructor called." << endl;
}
Location::~Location()
{
    cout << x << "," << y << "Object destroyed." << endl;
}
void f(Location p) //形参p是location类的传值参数
{
    cout << "Function:" << p.getx() << "," << p.gety() << endl;
}
int main()
{
    Location a(1, 2);
    f(a); //调用函数，传a的值
}