#include <iostream>
using namespace std;
int main()
{
    cout << "i\tj\n";
    for (int i = 1; i <= 3; i++) //��ѭ��
    {
        cout << i;
        for (int j = 1; j <= 3; j++) //��ѭ��
            cout << '\t' << j << endl;
    }
}