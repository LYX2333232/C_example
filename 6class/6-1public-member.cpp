#include <iostream>
using namespace std;
class Tclass
{
public:
    int x, y;
    void print()
    {
        cout << x << ',' << y << endl;
    };
};
int main()
{
    Tclass test;
    test.x = 100; //���ʹ��ж����ݳ�Ա
    test.y = 200;
    test.print(); //���ʹ��жγ�Ա����
}