#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, s, area;
    cout << "输入三角形的边长：\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a) //判断构成三角形的条件
    {
        s = (a + b + c) / 2; //计算面积
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "area=" << area << endl;
    }
    else
        cout << "It is not a trilateral!" << endl;
}