#include <iostream>
using namespace std;
int &maxref(int &x, int &y) //函数返回整型引用
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    cout << "Input a,b:";
    cin >> a >> b;
    cout << maxref(a, b) << endl;
}