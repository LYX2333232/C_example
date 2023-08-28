#include <iostream>
using namespace std;
int gcd(int, int);
int main()
{
    int a, b;
    cout << "input a (>=0):";
    cin >> a;
    cout << "input b (>=0):";
    cin >> b;
    cout << "gcd(" << a << "," << b << ")=" << gcd(a, b) << endl;
}
int gcd(int a, int b)
{
    int g;
    if (b == 0)
        g = a;
    else
        g = gcd(b, a % b);
    return g;
}