#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d, x1, x2, rp, ip;
    cout << "输入系数：" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (fabs(a) <= 1e-8) //用误差判断，系数a等于0
        cout << "It is not quadratic." << endl;
    else
    {
        d = b * b - 4 * a * c; //求判别式的值，赋给d
        if (fabs(d) <= 1e-8)   // d等于0，方程有两个相同的实根
        {
            cout << "It has two equal real roots:" << -b / (2 * a) << endl;
        }
        else
        {
            if (d > 1e-8) // d大于0，方程有两个不同的实根
            {
                x1 = (-b + sqrt(d) / (2 * a));
                x2 = (-b - sqrt(d) / (2 * a));
                cout << "It has two distinct real roots:" << x1 << "and" << x2 << endl;
            }
            else // d小于0，方程有两个共轭复根
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