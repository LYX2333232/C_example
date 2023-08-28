#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 10; i <= 20; i++)
    {
        if (i % 2)    //若i为奇数
            continue; //转向下一趟循环
        cout << i << " ";
    }
    cout << endl;
    for (i = 10; i <= 20; i++)
    {
        if (i % 2) //若i为奇数
            break; //终止循环
        cout << i << " ";
    }
    cout << endl;
}