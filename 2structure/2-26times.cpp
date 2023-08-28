#include <iostream>
using namespace std;
int main()
{
    cout << "i\tj\n";
    for (int i = 1; i <= 3; i++) //外循环
    {
        cout << i;
        for (int j = 1; j <= 3; j++) //内循环
            cout << '\t' << j << endl;
    }
}