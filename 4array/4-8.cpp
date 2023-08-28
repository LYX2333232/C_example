#include <iostream>
using namespace std;
int main()
{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i, *p;
    for (p = a[0], i = 1; p < a[0] + 12; p++, i++)
    {
        cout << p << " ";
        if (i % 4 == 0)
            cout << endl;
    }
    for (i = 0; i < 3; i++)
        cout << a[i] << " ";
    cout << endl;
}