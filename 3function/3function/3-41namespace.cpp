#include <iostream>
using namespace std;
namespace A
{
    void f()
    {
        cout << "f(): from namespace A" << endl;
    }
    void g()
    {
        cout << "g(): from namespace A" << endl;
    }
    namespace B
    {
        void f()
        {
            cout << "f(): from namespace B" << endl;
        }
        namespace C
        {
            void f()
            {
                cout << "f(): from namespace C" << endl;
            }
        }
    }
}
void g()
{
    cout << "g(): from global namespace" << endl;
}
int main()
{
    g();               //调用非命名空间函数g()
    using namespace A; //使用命名空间
    f();               //调用A::f()
    B::f();            //调用A::B::f()
    B::C::f();         //调用A::B::C::f()
    A::g();            //调用A::g()
}