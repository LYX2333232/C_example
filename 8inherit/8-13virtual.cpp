#include <iostream>
using namespace std;
class B
{
public:
    int b;
    B(int x = 10)
    {
        b = x;
        cout << "Constructor called :B\n";
    }
    ~B()
    {
        cout << "Destructor called :B\n";
    }
};
class B1 : virtual public B //虚继承类B
{
public:
    int b1;
    B1(int x1 = 11, int y1 = 21) : B(x1)
    {
        b1 = y1;
        cout << "Constructor called :B1\n";
    }
    ~B1()
    {
        cout << "Destructor called :B1\n";
    }
};
class B2 : virtual public B //虚继承类B
{
public:
    int b2;
    B2(int x2 = 12, int y2 = 22) : B(x2)
    {
        b2 = y2;
        cout << "Constructor called :B2\n";
    }
    ~B2()
    {
        cout << "Destructor called :B2\n";
    }
};
class D : public B1, public B2
{
public:
    int d;
    D(int i = 1, int j1 = 2, int j2 = 3, int k = 4) : B(i), B1(j1), B2(j2)
    {
        d = k;
        cout << "Constructor called :D\n";
    }
    ~D()
    {
        cout << "Destructor called :D\n";
    }
};
void test()
{
    D d;
    cout << "d.b=" << d.b << endl;
    cout << "d.b1=" << d.b1 << "\nd.b2=" << d.b2 << "\nd.d=" << d.d << "\n";
    B1 b;
    cout << "b.b=" << b.b << "\nb.b1=" << b.b1 << endl;
}
int main() { test(); }