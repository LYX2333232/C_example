#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base created\n";
    }
    ~base()
    {
        cout << "Base destroyed\n";
    }
};
class D_class : public base
{
public:
    D_class()
    {
        cout << "D_class created\n";
    }
    ~D_class()
    {
        cout << "D_class destroyed\n";
    }
};
int main()
{
    D_class d;
}