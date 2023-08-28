#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    char c;
    while ((c = cin.get()) != '.') //判断表达式中调用标准函数
        n++;
    cout << "n=" << n << endl;
}