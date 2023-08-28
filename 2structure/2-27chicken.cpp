#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "cock\t"
         << "hen\t"
         << "chick\t" << endl;
    for (x = 0; x <= 19; x++)     //公鸡的可能数
        for (y = 0; y <= 33; y++) //母鸡的可能数
        {
            z = 100 - x - y;
            if (5 * x + 3 * y + z / 3.0 == 100) //小鸡的可能数
                cout << x << '\t' << y << '\t' << z << endl;
        }
}