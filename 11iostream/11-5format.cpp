#include <iostream>
using namespace std;
int main()
{
    double x = 22.0 / 7;
    int i;
    cout << "Output in fixed :\n";
    cout.setf(ios::fixed | ios::showpos); //定点输出，显示+
    for (i = 1; i <= 5; i++)
    {
        cout.precision(i);
        cout << x << endl;
    }
    cout << "Output in scientific :\n";
    cout.setf(ios::scientific, ios::fixed | ios::showpos); //清除原设置，用科学记数法输出
    for (i = 1; i <= 5; i++)                               //用不同精度
    {
        cout.precision(i);
        cout << x * 1e5 << endl;
    }
}