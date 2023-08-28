#include <iostream>
using namespace std;
int main()
{
    int n, i, a0, a1, a2;
    cout << "n=";
    cin >> n;
    a0 = 0; //对第0项赋初值
    a1 = 1; //对第1项赋初值
    cout << a0 << '\t' << a1 << '\t';
    for (i = 3; i <= n; i++)
    {
        a2 = a0 + a1; //求新项的值
        cout << a2 << '\t';
        if (i % 10 == 0)
            cout << endl;
        a0 = a1;
        a1 = a2;
    }
    cout << endl;
}