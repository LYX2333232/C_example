#include <iostream>
using namespace std;
class counter
{
public:
    counter(int a) { m = a; }
    int m;         //�������ݳ�Ա
    static int sm; //���о�̬���ݳ�Ա
};
int counter::sm = 1; //��ֵΪ1
int main()
{
    counter c(5);
    int i;
    for (i = 0; i < 5; i++)
    {
        counter::sm += i;
        cout << counter::sm << '\t';
    }
    cout << endl;
    cout << "c.sm=" << c.sm << endl;
    cout << "c.m=" << c.m << endl;
}