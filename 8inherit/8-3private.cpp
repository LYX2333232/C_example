#include <iostream>
using namespace std;
class A
{
protected:
    int x, y;

public:
    void getxy()
    {
        cout << "Enter two numbers of x and y :";
        cin >> x >> y;
    };
    void putxy()
    {
        cout << "x=" << x << "y=" << y << '\n';
    };
};
class B : private A
{
private:
    int s;

public:
    int gets() { return s; }
    void makes()
    {
        getxy(); //调用基类成员函数
        s = x * y;
    }
};
int main()
{
    B b;
    cout << "It is b:\n";
    b.makes();
    cout << "s=" << b.gets() << endl;
}