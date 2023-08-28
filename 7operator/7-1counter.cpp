#include <iostream>
using namespace std;
class calculator
{
private:
    unsigned int value;

public:
    calculator(){value = 0;};
    void operator++();               //重载自增运算符
    void operator--();               //重载自减运算符
    unsigned int operator()() const; //重载括号运算符
};
void calculator::operator++()
{
    if (value < 65535)
        ++value; //使用语言预定义版本
    else         //溢出处理
    {
        cout << "\nData overflow !" << endl;
        abort(); //退出程序
    }
}
void calculator::operator--()
{
    if (value > 0)
        --value; //使用语言预定义版本
    else         //溢出处理
    {
        cout << "\nData overflow !" << endl;
        abort(); //退出程序
    }
}
unsigned int calculator::operator()()const
{
    return value;
}
int main()
{
    calculator counter;
    int i;
    for (i = 0; i < 5; i++)
    {
        ++counter; // counter.operator++()
        cout << "\n counter=" << counter();
    }
    for (i = 0; i < 5; i++)
    {
        --counter; // counter.operator--()
        cout << "\n counter=" << counter();
    }
}