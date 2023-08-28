#include <iostream>
using namespace std;
class number
{
protected:
    int val;

public:
    number(int i)
    {
        val = i;
    }
    virtual void show() const = 0;
};
class hextype : public number
{
public:
    hextype(int i) : number(i) {}
    void show() const
    {
        cout << "Hexadecimal:" << hex << val << endl;
    }
};
class dectype : public number
{
public:
    dectype(int i) : number(i) {}
    void show() const
    {
        cout << "Decimal:" << dec << val << endl;
    }
};
class octtype : public number
{
public:
    octtype(int i) : number(i) {}
    void show() const
    {
        cout << "octal:" << oct << val << endl;
    }
};
void fun(number &n) //普通函数定义抽象类的引用参数
{
    n.show();
}
int main()
{
    dectype n1(50);
    fun(n1); // dectype::show()
    hextype n2(50);
    fun(n2); // hextype::show()
    octtype n3(50);
    fun(n3); // octtype::show()
}