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
    const tclass t1(1, 2); // t1ʱ������
    tclass t2(3, 4);
    // t1.a=5;       //���󣬲����޸ĳ���������ݳ�Ա
    // t2.b=6;       //���󣬲����޸ĳ���������ݳ�Ա
    t2.a = 7;
    t2.b = 8;
    cout << "t1.a=" << t1.a << '\t' << "t1.b=" << t1.b << endl;
    cout << "t2.a=" << t2.a << '\t' << "t2.b=" << t2.b << endl;
}