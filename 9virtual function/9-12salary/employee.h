#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class employee
{
protected:
    long number;
    char name[20];

public:
    employee(const long k, const char *str)
    {
        number = k;
        strcpy_s(name, 20, str); //字符串赋值
    }
    virtual ~employee() //虚析构函数
    {
        name[0] = '\0';
    }
    const char *getname() const
    {
        return name;
    }
    const long getnumber() const
    {
        return number;
    }
    virtual double earings() const = 0; //纯虚函数，计算月薪
    virtual void print() const          //虚函数，输出编号、姓名
    {
        cout << number << setw(20) << name;
    }
};