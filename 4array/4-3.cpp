#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 3, 5, 7, 9}, i, *p;
    for (i = 0; i < 5; i++) //①用下标方式访问数组
        cout << "a[" << i << "]=" << a[i] << '\t';
    cout << endl;
    for (p = a, i = 0; i < 5; i++) //②用指针作为下标访问数组
        cout << "a[" << i << "]=" << p[i] << '\t';
    cout << endl;
    for (i = 0; i < 5; i++) //③用指针方式访问数组
        cout << "a[" << i << "]=" << *(a + i) << '\t';
    cout << endl;
    for (p = a; p < a + 5; p++) //④用指针间址访问访问数组
        cout << "a[" << i << "]=" << *p << '\t';
    cout << endl;
}