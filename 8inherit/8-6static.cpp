#include <iostream>
using namespace std;
class B
{
public:
    static void Add()
    {
        i++;
    }
    static int i;
    void out()
    {
        cout << "static i=" << i << endl;
    }
};
int B::i = 0;
class D : private B //私有继承类B
{
public:
    void f();
};
void D::f()
{
    i = 5; // i是类D的私有静态数据成员，在类中可见
    Add(); // Add是类D的私有静态成员函数，在类中可调用
    B::i++;
    B::Add();
}
int main()
{
    B x;
    D y;
    x.Add();
    x.out();
    y.f();
    cout << "static i=" << B::i << endl; //正确，i是类B的公有静态数据成员
    cout << "static i=" << x.i << endl;  //正确，i是类B的公有静态数据成员
    // cout<<"static i="<<y.i<<endl;//c错误，i是类D的私有静态数据成员
}