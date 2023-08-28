#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cin >> a >> b >> c; //输入数据
    max = a > b ? a > c ? a : c : b > c ? b
                                        : c; //求最大值
    cout << "max=" << max << endl;
}