#include <iostream>
using namespace std;
class calculator
{
private:
    unsigned int value;

public:
    calculator(){value = 0;};
    void operator++();               //�������������
    void operator--();               //�����Լ������
    unsigned int operator()() const; //�������������
};
void calculator::operator++()
{
    if (value < 65535)
        ++value; //ʹ������Ԥ����汾
    else         //�������
    {
        cout << "\nData overflow !" << endl;
        abort(); //�˳�����
    }
}
void calculator::operator--()
{
    if (value > 0)
        --value; //ʹ������Ԥ����汾
    else         //�������
    {
        cout << "\nData overflow !" << endl;
        abort(); //�˳�����
    }
}
unsigned int calculator::operator()()const
{
    return value;
}
int main()
{
    calculator counter;
    int i;
    for (i = 0; i < 5; i++)
    {
        ++counter; // counter.operator++()
        cout << "\n counter=" << counter();
    }
    for (i = 0; i < 5; i++)
    {
        --counter; // counter.operator--()
        cout << "\n counter=" << counter();
    }
}