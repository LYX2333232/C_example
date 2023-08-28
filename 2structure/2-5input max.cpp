#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (a > b)
        max = a; //求a和b中的较大值，赋给max
    else
        max = b;
    if (c > max)
        max = c; //求max和c中的较大值，赋给max
    cout << "max=" << max << endl;
}