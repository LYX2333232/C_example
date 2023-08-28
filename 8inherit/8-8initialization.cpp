#include <iostream>
using namespace std;
class base
{
public:
    int x;
    base(int i) : x(i){};
};
class derived : public base
{
    int a;

public:
    derived(int j) : a(j * 10), base(2)
    {
        cout << "base::x=" << x << "\nderived::a=" << a << endl;
    }
};
int main()
{
    derived d(1);
}