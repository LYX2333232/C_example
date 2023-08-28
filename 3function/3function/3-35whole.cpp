#include <iostream>
using namespace std;
int x;
int main()
{
    int x = 256;
    cout << "global variable x=" << ::x << endl; //输出全局变量x的值
    cout << "local variable x=" << x << endl;    //输出局部变量x的值
}