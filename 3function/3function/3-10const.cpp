#include <iostream>
using namespace std;
int func(const int *const p)
{
    int a = 10;
    a += *p;
    //*p=a;//���󣬲����޸�const����
    //*p=&a;//����
    return a;
}
int main()
{
    int x = 10;
    cout << func(&x) << endl;
}