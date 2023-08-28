#include "employee.h"
class hourlyworker : public employee
{
private:
    double wage;
    double hours;

public:
    hourlyworker(const long k, const char *str, double w, int h) : employee(k, str)
    {
        setwage(w);
        sethours(h);
    }
    ~hourlyworker() {}
    void setwage(double w) //置时薪
    {
        wage = w > 0 ? w : 0; //判断时薪的合法性
    }
    void sethours(int h) //置工时
    {
        hours = h >= 0 && h <= 16 * 31 ? h : 0; //判断工时的合法性
    }
    virtual double earnings() const //计算计时工人的月薪
    {
        if (hours <= 8 * 22) //计算基本工资
            return wage * hours;
        else //计算基本工资和加班工资
            return wage * 8 * 22 + (hours - 8 * 22) * wage * 1.5;
    }
    virtual void print() const //输出计时工人的月薪
    {
        employee::print();                    //输出编号、姓名
        cout << setw(16) << "Hours Worker\n"; //输出计时工人的月薪
        cout << "\twagePerHour" << wage << " Hours " << hours;
        cout << " earned $" << earnings << endl;
    }
};