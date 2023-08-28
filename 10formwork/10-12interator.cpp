#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int *p; //定义整型指针
    int n = sizeof(a) / sizeof(*a);
    for (p = a; p != a + n; ++p) //用指针访问数组
        cout << *p << '\t';
    cout << endl;
    vector<int> l(a, a + n); //定义vector<int>对象l
    vector<int>::iterator t; //定义vector<int>::iterator类型迭代子t
    for (t = l.begin(); t != l.end(); ++t)
        *t += 10;                   //用迭代子t访问l的元素
    vector<int>::const_iterator ct; //定义vector<int>::const_iterator迭代子ct
    for (ct = l.begin(); ct != l.end(); ct++)
        cout << *ct << '\t'; //用迭代子ct访问l的元素
    cout << endl;
}