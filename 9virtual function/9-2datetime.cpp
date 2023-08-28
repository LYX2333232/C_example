#include <iostream>
using namespace std;
class date
{
protected:
    int year, month, day;

public:
    date(int y, int m, int d)
    {
        setdate(y, m, d);
    }
    void setdate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void print() const
    {
        cout << year << '/' << month << '/' << day << ";";
    }
};
class datetime : public date
{
private:
    int hours, minutes, seconds;

public:
    datetime(int y, int m, int d, int h, int mi, int s) : date(y, m, d)
    {
        settime(h, mi, s);
    }
    void settime(int h, int mi, int s)
    {
        hours = h;
        minutes = mi;
        seconds = s;
    }
    void print() const
    {
        cout << hours << ':' << minutes << ':' << seconds << '\n';
    }
};
int main()
{
    datetime dt(2003, 1, 1, 12, 30, 0);
    datetime *pd = &dt;
    ((date)dt).print(); //对象类型转换，调用基类函数成员
    dt.print();
    ((date *)pd)->print(); //对象指针类型转换，调用基类成员函数
    pd->print();
}