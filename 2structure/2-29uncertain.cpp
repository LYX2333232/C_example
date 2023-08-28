#include <iostream>
using namespace std;
int main()
{
    int x, n = 0, s = 0;
    while (cin >> x) //判断表达式中输入的数据，用函数返回结果进行判断
    {
        n++, s += x;
    } //注意，while语句的循环体是逗号表达式
    cout << "n=" << n << endl
         << "sum=" << s << endl;
}