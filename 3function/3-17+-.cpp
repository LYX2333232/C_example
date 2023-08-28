#include <iostream>
using namespace std;
int &count(int);
int a, b;
int main()
{
    int x;
    cout << "Input numbers, the 0 is end :\n";
    cin >> x;
    while (x)
    {
        count(x)++; //根据返回不同变量引用进行++计算
        cin >> x;
    }
    cout << "the number of right:" << a << endl;
    cout << "the number of negative:" << b << endl;
}
int &count(int n)
{
    if (n > 0)
        return a;
    else
        return b;
}