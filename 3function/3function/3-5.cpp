#include <iostream>
using namespace std;
void count(int x, int y) //���庯����x��yΪ��ֵ����������ʵ�ε�ֵ
{
    x = x * 2; //���β�x�ϲ���
    y = y * y; //���β�y�ϲ���
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}
int main()
{
    int a = 3, b = 4;
    count(a, b); //���ú�����a��b��ֵ�ֱ𴫵ݸ�x��y
    cout << "a=" << a << '\t';
    cout << "b=" << b << endl;
}