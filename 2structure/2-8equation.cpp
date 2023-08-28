#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d, x1, x2, rp, ip;
    cout << "����ϵ����" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (fabs(a) <= 1e-8) //������жϣ�ϵ��a����0
        cout << "It is not quadratic." << endl;
    else
    {
        d = b * b - 4 * a * c; //���б�ʽ��ֵ������d
        if (fabs(d) <= 1e-8)   // d����0��������������ͬ��ʵ��
        {
            cout << "It has two equal real roots:" << -b / (2 * a) << endl;
        }
        else
        {
            if (d > 1e-8) // d����0��������������ͬ��ʵ��
            {
                x1 = (-b + sqrt(d) / (2 * a));
                x2 = (-b - sqrt(d) / (2 * a));
                cout << "It has two distinct real roots:" << x1 << "and" << x2 << endl;
            }
            else // dС��0�����������������
            {
                rp = -b / (2 * a);
                ip = sqrt(-d) / (2 * a);
                cout << "It has two complex roots:" << endl;
                cout << rp << '+' << ip << 'i' << endl;
                cout << rp << '-' << ip << 'i' << endl;
            }
        }
    }
}