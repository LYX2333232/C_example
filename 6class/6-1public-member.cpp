#include <iostream>
using namespace std;
class Tclass
{
public:
    int x, y;
    void print()
    {
        cout << x << ',' << y << endl;
    };
};
int main()
{
    Tclass test;
    test.x = 100; //访问公有段数据成员
    test.y = 200;
    test.print(); //访问公有段成员函数
}