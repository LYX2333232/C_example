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
int add(Tclass *ptf)
{
    return (ptf->x + ptf->y);
}
int main()
{
    Tclass test, *pt = &test; //˵��һ������test��һ������ָ��pt
    pt->x = 100;              //�ö���ָ��������ݳ�Ա
    pt->y = 200;
    pt->print(); //�ö���ָ����ó�Ա����
    test.x = 150;
    test.y = 450;
    test.print();
    cout << "x+y=" << add(&test) << endl; //�Ѷ����ַ����ָ�����
}