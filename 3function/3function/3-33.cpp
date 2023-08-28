#include <iostream>
using namespace std;
int main()
{
    int a = 1; //外层的a
    {
        int a = 1; //内层的a
        a++;
        cout << "inside a=" << a << endl;
    } //内层的a作用域结束
    cout << "outside a=" << a << endl;
} //外层的a作用域结束