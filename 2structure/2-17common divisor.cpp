#include <iostream>
using namespace std;
int main()
{
    int m, n, a, b, r;
    cout << "input two integers:\n";
    cout << '?';
    cin >> m; //须输入第1个正整数
    cout << '?';
    cin >> n; //须输入第2个正整数
    if (m > n)
    {
        a = m;
        b = n;
    } //把大数放在a中，小数放在b中
    else
    {
        a = n;
        b = m;
    }
    r = b;         //置余数初值
    while (r != 0) //当余数不等于0时执行
    {
        r = a % b; //求余数r
        a = b;     //用b的值替换a的值
        b = r;     //用r的值替换b的值
    }
    cout << m << "and" << n << "maximal common divisor is:" << a << endl;
}