#include <iostream>
using namespace std;
class A
{
public:
    A(int x) : a(x) {}
    int a;
};
class B
{
public:
    B(int x, int y) : aa(x) //�ò�����ʼʽ���ó�Ա�๹�캯��
    {
        b = y;
    }
    void out()
    {
        cout << "aa=" << aa.a << endl;
        cout << "b=" << b << endl;
    }

private:
    int b;
    A aa; //�����ͳ�Ա
};
int main()
{
    B obj(3, 5);
    obj.out();
}