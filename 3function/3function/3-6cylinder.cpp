#include <iostream>
using namespace std;
double volume(double radius, double height);
int main()
{
    double v, r, h;
    cout << "Input radius and height :\n";
    cin >> r >> h;
    v = volume(r, h); //把r和h的值传递给形参
    cout << "Volume=" << v << endl;
}
double volume(double radius, double height) //在参数表中定义两个传值参数
{
    return 3.14 * radius * radius * height; //返回表达式的值
}