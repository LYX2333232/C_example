#include <iostream>
using namespace std;
class A
{
public:
    virtual void vf1()
    {
        cout << "It is virtual function vf1() of A.\n";
    }
    virtual void vf2()
    {
        cout << "It is virtual function vf2() of A.\n";
    }
    virtual void vf3()
    {
        cout << "It is virtual function vf3() of A.\n";
    }
    void fun()
    {
        cout << "It is common member function A::fun().\n";
    }
};
class B : public A
{
public:
    void vf1()
    {
        cout << "Virtual function vf1() overloading of B.\n";
    }
    void vf2(int x)
    {
        cout << "B::vf2()lose virtual character.The parameter is " << x << '\n';
    }
    // char vf3(){};//仅返回类型不同，错误重载
    void fun()
    {
        cout << "It is common over loading member function B::fun().\n";
    }
};
int main()
{
    B b;
    A *Ap = &b; //基类指针指向派生类对象
    Ap->vf1();  //调用B::vf1()
    Ap->vf2();  //调用A::vf2()
    b.vf2(5);   //调用B::vf2()
    Ap->vf3();  //调用A::vf3()
    Ap->fun();  //调用A::fun()
    b.fun();    //调用A::fun()
}