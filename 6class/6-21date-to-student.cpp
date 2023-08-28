`// StudentHead.h
#include <iostream>
#include <cstring>
using namespace std;
class date
{
public:
    date(int y = 2000, int m = 1, int d = 1);
    void set(int y, int m, int d);
    void print() const;

private:
    int year, month, day;
};
class student
{
public:
    student(int y, int m, int d, int num, char *pname = "no name");
    void set(int y, int m, int d, int num, char *pname);
    void print() const;

private:
    int code;
    char name[20];
    date birthday; //定义类成员
};
// date.cpp
//#include "StudentHead.h"
date::date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void date::set(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void date::print() const
{
    cout << year << '/' << month << '/' << day << endl;
}
// student.cpp
//#include "StudentHead.h" //带参数构造函数完成类成员和自身数据成员的初始化
student::student(int y, int m, int d, int num, char *pname) : birthday(y, m, d)
{
    code = num;
    strcpy_s(name, sizeof(name), pname);
    name[sizeof(name) - 1] = '\0';
}
void student::set(int y, int m, int d, int num, char *pname)
{
    code = num;
    strcpy_s(name, sizeof(name), pname);
    name[sizeof(name) - 1] = '\0';
    cout << name << '\n';
}
void student::print() const
{
    cout << "序号：" << code << "\t姓名：" << name << "\t出生日期：";
    birthday.print(); //调用类成员的成员函数
    cout << endl;
}
// main.cpp
//#include "Student.h"
int main()
{
    student stu(1985, 10, 1, 1001, "李华");
    stu.print();
}