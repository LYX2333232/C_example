#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double PI = 3.1415926535;
    double x, y;
    x = PI / 2;
    y = sin(x); //���ñ�׼����
    cout << "sin(" << x << ")=" << y << endl;
    y = cos(x); //���ñ�׼����
    cout << "cos(" << x << ")=" << y << endl;
}