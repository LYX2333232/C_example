#include <iostream>
using namespace std;
int main()
{
    int m, n, a, b, r;
    cout << "input two integers:\n";
    cout << '?';
    cin >> m; //�������1��������
    cout << '?';
    cin >> n; //�������2��������
    if (m > n)
    {
        a = m;
        b = n;
    } //�Ѵ�������a�У�С������b��
    else
    {
        a = n;
        b = m;
    }
    r = b;         //��������ֵ
    while (r != 0) //������������0ʱִ��
    {
        r = a % b; //������r
        a = b;     //��b��ֵ�滻a��ֵ
        b = r;     //��r��ֵ�滻b��ֵ
    }
    cout << m << "and" << n << "maximal common divisor is:" << a << endl;
}