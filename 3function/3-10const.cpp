#include <iostream>
using namespace std;
int func(const int *const p)
{
    int a = 10;
    a += *p;
    //*p=a;//错误，不能修改const对象
    //*p=&a;//错误
    return a;
}
int main()
{
    int x = 10;
    cout << func(&x) << endl;
}