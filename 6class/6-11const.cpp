#include <iostream>
using namespace std;
class mclass
{
public:
    int k;
    const int m;       //说明常数据成员
    mclass() : m(5) {} //用参数初始式对昌数据成员赋值
    void testfun()
    {
        // m++;     //错误，不能在成员函数中修改常数据成员
        k++; //可以修改一般数据成员
    }
};
int main()
{
    mclass t1, t2;
    t1.k = 100;
    // t1.m=123;     //错误，不能在类外修改常数据成员
    cout << "t1.k=" << t1.k << '\t' << "t1.m=" << t1.m << endl;
    t2.k = 200;
    t2.testfun();
    cout << "&t1.m=" << &t1.m << endl;
    cout << "t2.k=" << t2.k << '\t' << "t2.m=" << t2.m << endl;
    cout << "&t2.m=" << &t2.m << endl;
}