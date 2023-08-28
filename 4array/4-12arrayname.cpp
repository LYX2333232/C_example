#include <iostream>
using namespace std;
void fun(int[], int); //函数原型，第1个形参是数组类型
int main()
{
    int i, a[] = {1, 2, 3};
    cout << "one:";
    for (i = 0; i < 3; i++)
    {
        cout << '\t' << a[i];
    }
    cout << endl;
    fun(a, sizeof(a) / sizeof(int)); //数组名a作为实参，传地址
    cout << endl;
}
void fun(int x[], int num) //一维形参数组，可以省略数组长度
{
    int i;
    for (i = 0; i < num; i++)
        x[i]++;
    cout << "two:";
    for (i = 0; i < num; i++)
        cout << '\t' << x[i];
    cout << endl;
    return;
}