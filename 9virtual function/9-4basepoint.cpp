#include <iostream>
using namespace std;
class base
{
protected:
    char x;

public:
    base(char xx)
    {
        x = xx;
    }
    void who()
    {
        cout << "base class:" << x << '\n';
    }
};
class first : public base
{
protected:
    char y;

public:
    first(char xx, char yy) : base(xx)
    {
        y = yy;
    }
    void who()
    {
        cout << "first derived class:" << x << "," << y << "\n";
    }
};
class second : public first
{
protected:
    char z;

public:
    second(char xx, char yy, char zz) : first(xx, yy)
    {
        z = zz;
    }
    void who()
    {
        cout << "second derived class:" << x << "," << y << "," << z << "\n";
    }
};
int main()
{
    base b('A');
    base *p;
    first f('T', 'O');
    second s('E', 'N', 'D');
    p = &b;
    p->who();
    p = &s;
    p->who(); //会调用基类的函数
    f.who();
    ((second *)p)->who();
}