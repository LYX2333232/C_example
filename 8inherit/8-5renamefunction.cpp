#include <iostream>
using namespace std;
class A
{
public:
    int a1, a2;
    A(int i1 = 0, int i2 = 0)
    {
        a1 = i1;
        a2 = i2;
    }
    void print()
    {
        cout << "a1=" << a1 << "\ta2=" << a2 << endl;
    }
};
class B : public A
{
public:
    int b1, b2;
    B(int j1 = 1, int j2 = 1)
    {
        b1 = j1;
        b2 = j2;
    }
    void print() //定义同名函数
    {
        cout << "b1=" << b1 << "\tb2=" << b2 << endl;
    }
    void printAB()
    {
        A::print(); //派生类对象调用基类版本同名函数
        print();    //派生类对象调用自身的成员函数
    }
};
int main()
{
    B b;
    b.A::print();
    b.printAB();
}