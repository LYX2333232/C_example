#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = b = 10;
    cout << a << '\t' << b << endl;
    (a = b) = 5;
    cout << a << '\t' << b << endl;
}