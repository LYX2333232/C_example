#include <iostream>
using namespace std;
class date
{
public:
    date(int, int, int);
    ~date();
    void setdate(int y, int m, int d);
    void isleapyear() const;
    void printdate() const;

private:
    int year, month, day;
};
date::date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
    cout << year << '/' << month << '/' << day << ":Date object initialized.\n";
}
date::~date()
{
    cout << year << '/' << month << '/' << day << "Date object destroyed.\n";
}
void date::setdate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void date::isleapyear() const
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "Is leap year.\n";
    else
        cout << "Is not leap year.\n";
}
void date::printdate() const
{
    cout << year << '/' << month << '/' << day << endl;
}
int main()
{
    date d1(2019, 5, 1);
    date d2(2020, 10, 1);
    d1.setdate(1998, 6, 15);
    d1.printdate();
    d1.isleapyear();
    d2.setdate(2000, 9, 23);
    d2.printdate();
    d2.isleapyear();
}