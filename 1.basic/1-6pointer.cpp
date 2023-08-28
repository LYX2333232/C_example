#include <iostream>
using namespace std;
int main()
{
    int a = 451;
    cout << a << endl;     //输出变量a的值
    cout << (&a) << endl;  //输出变量a的地址
    cout << *(&a) << endl; //输出变量a的值
}