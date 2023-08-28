#include <iostream>
using namespace std;
class B
{
public:
    B() { cout << "Constructor called:B\n"; }
    ~B() { cout << "Destructor called:B\n"; }
    int b;
};
class B1 : public B
{
public:
    B1() { cout << "Constructor called:B1\n"; }
    ~B1() { cout << "Destructor called:B1\n"; }
    int b1;
};
class B2 : public B
{
public:
    B2() { cout << "Constructor called:B2\n"; }
    ~B2() { cout << "Destructor called:B2\n"; }
    int b2;
};
class D : public B1, public B2
{
public:
    D() { cout << "Constructor called:D\n"; }
    ~D() { cout << "Destructor called:D\n"; }
    int d;
};
void test()
{
    D dd;
    dd.B1::b = 5;
    dd.B2::b = 10;
    dd.b1 = 25;
    dd.b2 = 100;
    dd.d = 140;
    cout << "dd.B1::b=" << dd.B1::b << "\ndd.B2::b=" << dd.B2::b << '\n';
    cout << "dd.b1=" << dd.b1 << "\ndd.b2=" << dd.b2 << "\ndd.d=" << dd.d << '\n';
}
int main()
{
    test();
}