#include <iostream>
using namespace std;
class mclass
{
public:
    int k;
    const int m;       //˵�������ݳ�Ա
    mclass() : m(5) {} //�ò�����ʼʽ�Բ����ݳ�Ա��ֵ
    void testfun()
    {
        // m++;     //���󣬲����ڳ�Ա�������޸ĳ����ݳ�Ա
        k++; //�����޸�һ�����ݳ�Ա
    }
};
int main()
{
    mclass t1, t2;
    t1.k = 100;
    // t1.m=123;     //���󣬲����������޸ĳ����ݳ�Ա
    cout << "t1.k=" << t1.k << '\t' << "t1.m=" << t1.m << endl;
    t2.k = 200;
    t2.testfun();
    cout << "&t1.m=" << &t1.m << endl;
    cout << "t2.k=" << t2.k << '\t' << "t2.m=" << t2.m << endl;
    cout << "&t2.m=" << &t2.m << endl;
}