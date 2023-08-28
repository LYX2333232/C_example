#include <iostream>
using namespace std;
template <typename T> //定义类模板
class A
{
protected:
    T t;

public:
    A(T x)
    {
        t = x;
    }
    void out()
    {
        cout << t << endl;
    }
};
class B : public A<int> //实例化基类的类属参数，派生模板类
{
protected:
    double y;

public:
    B(int a, double x) : A<int>(a)
    {
        y = x;
    }
    void out()
    {
        A<int>::out();
        cout << y << endl;
    }
};
int main()
{
    A<int> a(123); //定义基类对象
    a.out();
    B b(789, 5.16); //定义派生类对象
    b.out();
}