#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "cock\t"
         << "hen\t"
         << "chick\t" << endl;
    for (x = 0; x <= 19; x++)     //�����Ŀ�����
        for (y = 0; y <= 33; y++) //ĸ���Ŀ�����
        {
            z = 100 - x - y;
            if (5 * x + 3 * y + z / 3.0 == 100) //С���Ŀ�����
                cout << x << '\t' << y << '\t' << z << endl;
        }
}