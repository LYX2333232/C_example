#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    A() //��A�Ĺ��캯��
    {
        x = 1;
    }
    int out() //��A��Ա����������this->x��ֵ
    {
        return x;
    }
    void addx()
    {
        x++;
    }
};
class B : public A
{
private:
    int y;

public:
    B() //��B�Ĺ��캯��
    {
        y = 1;
    }
    int out() //��B��Ա����
    {
        return y;
    } //����this->y��ֵ
    void addy()
    {
        y++;
    }
};
int main()
{
    A a;
    cout << "�����˶��� a��\n";
    cout << "a.x=" << a.out() << endl;
    B b;
    cout << "�����˶��� b��\n";
    cout << "b.x=" << b.A::out() << endl; //���b.x
    cout << "b.y=" << b.out() << endl;    //���b.y
    cout << "����b�����ݳ�Ա+1��\n";
    b.addx();                             // b.x++
    b.addy();                             // b.y++
    cout << "b.x=" << b.A::out() << endl; //���b.x
    cout << "b.y=" << b.out() << endl;    //���b.y
}