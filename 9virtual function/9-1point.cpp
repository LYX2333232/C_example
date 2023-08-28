#include <iostream>
#include <cstring>
using namespace std;
class A
{
    char name[20];

public:
    void putname(char *s)
    {
        strcpy_s(name, s);
    }
    void showname() const
    {
        cout << name << '\n';
    }
};
class B : public A
{
    char phone[20];

public:
    void putphone(char *num)
    {
        strcpy_s(phone, num);
    }
    void showphone() const
    {
        cout << phone << '\n';
    }
};
int main()
{
    A *pA;
    A obja;
    B objb;
    pA = &obja;
    pA->putname("Wang xiao hua");
    pA->showname();
    pA = &objb;               //基类指针指向派生类对象
    pA->putname("Chen ming"); //调用基类成员函数
    pA->showname();
    objb.putphone("5555_12345678"); //使用派生类成员函数
    ((B *)pA)->showphone();         //对基类指针进行强制类型转换
}