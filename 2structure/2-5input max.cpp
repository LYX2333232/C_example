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
        max = a; //��a��b�еĽϴ�ֵ������max
    else
        max = b;
    if (c > max)
        max = c; //��max��c�еĽϴ�ֵ������max
    cout << "max=" << max << endl;
}