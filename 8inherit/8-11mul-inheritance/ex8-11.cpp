#include <iostream>
using namespace std;
#include "base1.h"
#include "base2.h"
#include "dervied.h"
int main()
{
    base1 b1(10);
    base2 b2('k');
    derived d(5, 'A', 2.5);
    cout << "object b1 contains integer " << b1.getdata() << "\nobject b2 contains character " << b2.getdata() << "\nobject d contains:\n"
         << d << "\n";
    cout << "data members of dervied can be accessed in other way:\n"
         << "   Integer:" << d.base1::getdata() << "\n    Character:" << d.base2::getdata() << "\n    Real number:" << d.getR() << "\n";
}