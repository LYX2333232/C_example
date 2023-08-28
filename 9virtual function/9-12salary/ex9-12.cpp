#include <iostream>
#include <string>
#include <iomanip>
#include "employee.h"
using namespace std;
#include "manager.h"
#include "pieceworker.h"
#include "hourlyworker.h"
void test1()
{
    cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
    manager m1(10135, "Cheng ShaoHua", 1200);
    manager m2(10201, "Yan HaiFeng");
    m2.setmonthlysalary(5300);
    hourlyworker hw1(30712, "Zhao XiaoMing", 5, 8 * 20);
    hourlyworker hw2(30649, "Gao DongSheng");
    hw2.setwage(4.5);
    hw2.sethours(10 * 30);
    pieceworker pw1(20382, "Xiu LiWei", 0.5, 2850);
    pieceworker pw2(20496, "Huang DongLin");
    pw2.setwage(0.75);
    pw2.setquantity(1850);
    //使用抽象类指针，调用派生类版本的函数
    employee *basept;
    basept = &m1;
    basept->print();
    basept = &m2;
    basept->print();
    basept = &hw1;
    basept->print();
    basept = &hw2;
    basept->print();
    basept = &pw1;
    basept->print();
    basept = &pw2;
    basept->print();
}
int main()
{
    test1();
}