#include <iostream>
using namespace std;
class A
{
public:
    virtual ~A() //虚析构函数
    {
        cout << "A::~A() is called.\n";
    }
};
class B : public A
{
public:
    ~B()
    {
        cout << "B::~B()is called.\n";
    }
};
int main()
{
    A *Ap = new B; //用基类指针建立派生类的动态对象
    B *Bp = new B; //用派生类指针建立派生类的动态对象
    cout << "delete first object:\n";
    delete Ap;
    cout << "delete second object:\n";
    delete Bp;
}