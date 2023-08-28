#include <iostream>
#include <cstring>
using namespace std;
struct date
{
    int year, month, day;
};
class student
{
public:
    student(int y, int m, int d, int num = 0, char *pname = "no name");
    void printstudent() const; //常成员函数
private:
    const int code; //常数据成员
    char name[20];
    date birthday; //结构数据成员
};
void student::printstudent() const
{
    cout << "序号：" << code << "\t姓名：" << name << '\t' << "出生日期：" << birthday.year << '-' << birthday.month << '-' << birthday.day << endl;
}
//用带参数构造函数完成数据成员初始化
student::student(int y, int m, int d, int num, char *pname) : code(num)
{
    strcpy_s(name, pname);
    name[sizeof(name) - 1] = '\0';
    birthday.year = y;
    birthday.month = m;
    birthday.day = d;
}
int main()
{
    student stu1(1990, 3, 21, 1001, "陈春");
    stu1.printstudent();
    student stu2(1985, 10, 1, 1002, "张庆华");
    stu2.printstudent();
    system("pause");
}
