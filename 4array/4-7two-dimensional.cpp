#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            cin >> a[i][j];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            cout << setw(5) << a[i][j];
    cout << endl;
}