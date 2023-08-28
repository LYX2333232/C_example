#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (b == 0)
    {
        cout << "³ýÊýÎªÁã" << endl;
        abort();
    }
    else
        cout << a << '/' << b << '=' << a / b << endl;
}