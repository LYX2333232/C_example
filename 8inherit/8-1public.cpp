#include <iostream>
using namespace std;
class A
{
protected:
    int x, y;

public:
    void get_xy()
    {
        cout << "Enter two numbers of x,y :";
        cin >> x >> y;
    }
    void put_xy()
    {
        cout << "x=" << x << "y=" << y << '\n';
    }
};
class B : public A
{
protected:
    int s;

public:
    int get_s()
    {
        return s;
    }
    void make_s()
    {
        s = x * y; //使用基类数据成员x,y
    }
};
class C : public B
{
protected:
    int h, v;

public:
    void get_h()
    {
        cout << "Enter a number of h :";
        cin >> h;
    }
    int show_v()
    {
        return v;
    };
    void make_v()
    {
        make_s();        //使用基类成员函数
        v = get_s() * h; //使用基类成员函数
    }
};
int main()
{
    A a;
    B b;
    C c;
    cout << "It is a:\n";
    a.get_xy();
    a.put_xy();
    cout << "It is b:\n";
    b.get_xy();
    b.make_s();
    cout << "s=" << b.get_s() << endl;
    cout << "It is c:\n";
    c.get_xy();
    c.get_h();
    c.make_v();
    cout << "v=" << c.show_v() << endl;
}