#include <iostream>
using namespace std;
int func();
int main()
{
    cout << func() << endl;
    cout << func() << endl;
}
int func()
{
    int a = 0;        //自动变量a，再次调用时重新分配存储空间
    static int b = 1; //静态变量b，再次调用时保留原值
    a++;
    b++;
    cout << "auto a=" << a << endl;
    cout << "static b=" << b << endl;
    return a + b;
}