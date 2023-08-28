#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0;
    cin >> a;     //输入第1个数据，建立循环条件
    while (a > 0) // a>0时执行循环
    {
        sum += a; //累加a的值
        cin >> a; //输入一个新的a值
    }
    cout << "sum=" << sum << endl; //输出累加结果
}