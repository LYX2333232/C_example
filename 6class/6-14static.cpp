#include <iostream>
using namespace std;
class counter
{
    static int num; //����˽�о�̬���ݳ�Ա
public:
    void set(int i)
    {
        num = i;
    } //��Ա�������ʾ�̬���ݳ�Ա
    void show()
    {
        cout << num << '\t';
    } //��Ա�������ʾ�̬���ݳ�Ա
};
int counter::num = 0; //���徲̬���ݳ�Ա���ó�ֵ0
int main()
{
    counter a, b;
    a.show();
    b.show();
    a.set(10);
    a.show();
    b.show();
}