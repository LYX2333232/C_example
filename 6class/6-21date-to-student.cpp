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
    date birthday; //�������Ա
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
//#include "StudentHead.h" //���������캯��������Ա���������ݳ�Ա�ĳ�ʼ��
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
    cout << "��ţ�" << code << "\t������" << name << "\t�������ڣ�";
    birthday.print(); //�������Ա�ĳ�Ա����
    cout << endl;
}
// main.cpp
//#include "Student.h"
int main()
{
    student stu(1985, 10, 1, 1001, "�");
    stu.print();
}