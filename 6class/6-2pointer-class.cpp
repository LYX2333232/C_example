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
int add(Tclass *ptf)
{
    return (ptf->x + ptf->y);
}
int main()
{
    Tclass test, *pt = &test; //说明一个对象test和一个对象指针pt
    pt->x = 100;              //用对象指针访问数据成员
    pt->y = 200;
    pt->print(); //用对象指针调用成员函数
    test.x = 150;
    test.y = 450;
    test.print();
    cout << "x+y=" << add(&test) << endl; //把对象地址传给指针参数
}