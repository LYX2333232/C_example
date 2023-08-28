#include <iostream>
using namespace std;
int main()
{
    int i, n;
    double x, max;
    cout << "n=";
    cin >> n;
    cin >> x;                //输入第1个数据
    max = x;                 //用第一个数据置累加器初值
    for (i = 2; i <= n; i++) //循环计数
    {
        cin >> x; //输入数据
        if (x > max)
            max = x; //求当前最大值
    }
    cout << "max=" << max << endl;
}