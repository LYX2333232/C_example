#include <iostream>
using namespace std;
int main()
{
    double r, girth, area; //说明数据
    const double PI = 3.1415;
    cout << "Please input radius:\n";
    cin >> r;                       //输入半径
    girth = 2 * PI * r;             //计算周长
    area = PI * r * r;              //计算面积
    cout << "radius=" << r << endl; //输出数据
    cout << "girth=" << girth << endl;
    cout << "area=" << area << endl;
}