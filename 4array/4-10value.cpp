#include <iostream>
using namespace std;
void fun(int, int, int);
int main()
{
    int i, a[3] = {1, 2, 3};
    cout << "one:";
    for (i = 0; i < 3; i++)
        cout << '\t' << a[i];
    cout << endl;
    fun(a[0], a[1], a[2]); //传递数组元素值
    cout << "three:";
    for (i = 0; i < 3; i++)
        cout << '\t' << a[i];
    cout << endl;
}
void fun(int a, int b, int c) //传值参数
{
    a++;
    b++;
    c++;
    cout << "two:";
    cout << '\t' << a << '\t' << b << '\t' << c << endl;
    return;
}