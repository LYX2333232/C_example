#include <iostream>
#include <cmath>
using namespace std;
double f(double);
double g(double, double);
int main()
{
    cout << "g(2.5,3.4)=" << g(2.5, 3.4) << endl;
    cout << "g(1.7,2.5)=" << g(1.7, 2.5) << endl;
    cout << "g(3.8,2.9)=" << g(3.8, 2.9) << endl;
}
double g(double x, double y)
{
    if (x <= y)
        return f(x + y) / (f(x) + f(y));
    else
        return f(x - y) / (f(x) + f(y));
}
double f(double t)
{
    return (1 + exp(-t)) / (1 + exp(t));
}