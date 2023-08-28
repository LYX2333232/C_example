#include "employee.h"
#include <cassert>
using namespace std;
class manager : public employee
{
private:
    double monthlysalary; //月薪
    manager(const long k, const char *str, double sal = 0.0) : employee(k, str)
    {
        setmonthlysalary(sal);
    }
    ~manager() {}
    void setmonthlysalary(double sal) //置月薪
    {
        monthlysalary = sal > 0 ? sal : 0;
    }
    virtual double earnings() const //计算管理人员的月薪
    {
        return monthlysalary;
    }
    virtual void print() const //输出管理人员的信息
    {
        employee::print();               //调用基类版本的函数，输出编号和姓名
        cout << setw(16) << "Manager\n"; //输出管理人员的月薪
        cout << "\tearned $" << monthlysalary << endl;
    }
};