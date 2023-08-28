#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    A() //类A的构造函数
    {
        x = 1;
    }
    int out() //类A成员函数，返回this->x的值
    {
        return x;
    }
    void addx()
    {
        x++;
    }
};
class B : public A
{
private:
    int y;

public:
    B() //类B的构造函数
    {
        y = 1;
    }
    int out() //类B成员函数
    {
        return y;
    } //返回this->y的值
    void addy()
    {
        y++;
    }
};
int main()
{
    A a;
    cout << "构造了对象 a：\n";
    cout << "a.x=" << a.out() << endl;
    B b;
    cout << "构造了对象 b：\n";
    cout << "b.x=" << b.A::out() << endl; //输出b.x
    cout << "b.y=" << b.out() << endl;    //输出b.y
    cout << "对象b的数据成员+1：\n";
    b.addx();                             // b.x++
    b.addy();                             // b.y++
    cout << "b.x=" << b.A::out() << endl; //输出b.x
    cout << "b.y=" << b.out() << endl;    //输出b.y
}