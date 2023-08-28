#include <iostream>
using namespace std;
int main()
{
    int i, n;
    long int t;
    cout << "input one integer n(n<=16):";
    cin >> n;
    t = 1;                   //乘法器初值为1
    for (i = 2; i <= n; i++) //按步长循环求阶乘
        t *= i;
    cout << n << "!=" << t << endl;
}