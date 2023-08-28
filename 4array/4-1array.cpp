#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    static int b[5] = {1, 2, 3};
    for (i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;
    int c[] = {1, 2, 3, 4, 5, 6, 7};
    for (i = 0; i < sizeof(c) / sizeof(int); i++)
        cout << c[i] << " ";
    cout << endl;
}