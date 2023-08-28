#include <iostream>
using namespace std;
class date
{
public:
    date();
    ~date();
    void setdate(int y, int m, int d);
    int isleapyear() const; //����Ա����
    void printdate() const; //����Ա����
private:
    int year, month, day;
};
date::date() //���캯��
{
    cout << "Date object initialized.\n";
}
date::~date() //��������
{
    cout << "Date object destroyed.\n";
}
void date::setdate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
int date::isleapyear() const
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
void date::printdate() const
{
    cout << year << '/' << month << '/' << day << endl;
}
int main()
{
    date d;
    d.setdate(2020, 5, 1);
    d.printdate();
    if (d.isleapyear())
        cout << "Is leap year." << endl;
    else
        cout << "Is not leap year." << endl;
}