#include <iostream>
using namespace std;
class counter
{
public:
    counter(int a) { m = a; }
    int m;         //公有数据成员
    static int sm; //公有静态数据成员
};
int counter::sm = 1; //初值为1
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