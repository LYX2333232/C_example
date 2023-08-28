#include <iostream>
using namespace std;
void anonym(const int &ref)
{
    cout << "The address of ref is :" << &ref << endl;
    return;
}
int main()
{
    int val = 10;
    cout << "The address of val is :" << &val << endl;
    anonym(val);
    anonym(val + 5);
}