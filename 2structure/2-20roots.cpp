#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x0, x, epson;
    cout << "Input test root,x0=";
    cin >> x0; //输入迭代初值
    cout << "Input precision,epson=";
    cin >> epson; //输入精度
    do            //循环
    {
        x = x0;                                                                            //迭代
        x0 = x - (pow(x, 3) + 2 * pow(x, 2) + 10 * x - 20) / (3 * pow(x, 2) + 4 * x + 10); //求新值
    } while (fabs(x0 - x) > epson);                                                        //判断精度
    cout << "The root is:" << x0 << endl;                                                  //输出近似根
}