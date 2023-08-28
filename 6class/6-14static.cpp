#include <iostream>
using namespace std;
class counter
{
    static int num; //声明私有静态数据成员
public:
    void set(int i)
    {
        num = i;
    } //成员函数访问静态数据成员
    void show()
    {
        cout << num << '\t';
    } //成员函数访问静态数据成员
};
int counter::num = 0; //定义静态数据成员，置初值0
int main()
{
    counter a, b;
    a.show();
    b.show();
    a.set(10);
    a.show();
    b.show();
}