#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
};
class derived : public base
{
public:
    int b, c;
};
int main()
{
    derived d;
    d.a = 1;
    d.base::b = 2; // base::b使用的是base类的数据成员b
    d.b = 3;       //这里使用的是derived 类的数据成员b
    d.c = 4;
    cout << "d.a=" << d.a << '\n'
         << "d.base::b=" << d.base::b << '\n'
         << "d.b=" << d.b << '\n'
         << "d.c=" << d.c << '\n';
}