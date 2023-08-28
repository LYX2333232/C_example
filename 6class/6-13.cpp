#include <iostream>
using namespace std;
class tclass
{
public:
    int a, b;
    tclass(int i, int j)
    {
        a = i;
        b = j;
    }
};
int main()
{
    const tclass t1(1, 2); // t1时常对象
    tclass t2(3, 4);
    // t1.a=5;       //错误，不能修改常对象的数据成员
    // t2.b=6;       //错误，不能修改常对象的数据成员
    t2.a = 7;
    t2.b = 8;
    cout << "t1.a=" << t1.a << '\t' << "t1.b=" << t1.b << endl;
    cout << "t2.a=" << t2.a << '\t' << "t2.b=" << t2.b << endl;
}