#include <iostream>
using namespace std;
class A
{
public:
    A(int x) : a(x) {}
    int a;
};
class B
{
public:
    B(int x, int y) : aa(x) //用参数初始式调用成员类构造函数
    {
        b = y;
    }
    void out()
    {
        cout << "aa=" << aa.a << endl;
        cout << "b=" << b << endl;
    }

private:
    int b;
    A aa; //类类型成员
};
int main()
{
    B obj(3, 5);
    obj.out();
}