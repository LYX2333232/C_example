#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int n;
    double x, term, sum;
    cout << "x=";
    cin >> x; //输入x的值
    n = 1;    //置计数器初值
    sum = x;  //置累加器初值
    term = x; //当前项
    do        //循环
    {
        n += 2;                                 //计数器+2
        term *= (-x * x) / (n - 1) / n;         //当前项的值
        sum += term;                            //当前累加和
    } while (fabs(term) >= 1e-8);               //判断精度
    cout << "sin(" << x << ")=" << sum << endl; //输出计算结果
}