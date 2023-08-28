#include <iostream>
using namespace std;
#include "Max.h"
int main()
{
    int j, k;
    cout << "Enter two integer:\n";
    cin >> j >> k;
    cout << "Max(" << j << "," << k << ")=" << Max(j, k) << endl;
    double x, y;
    cout << "Enter two double:\n";
    cin >> x >> y;
    cout << "Max(" << x << "," << y << ")=" << Max(x, y) << endl;
    char c, h;
    cout << "Enter two character:\n";
    cin >> c >> h;
    cout << "Max(" << c << "," << h << ")=" << Max(c, h) << endl;
}