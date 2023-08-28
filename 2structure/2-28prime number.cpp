#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m, i, k, n = 0;
    for (m = 2; m <= 100; m++) //循环，测试每个m值
    {
        k = int(sqrt(double(m))); //取测试范围
        i = 2;
        while (m % i && i <= k) //查找m的约数
            i++;
        if (i > k) //没有大于1的约数
        {
            cout << m << '\t'; //输出素数
            n += 1;            //记录素数个数
            if (n % 5 == 0)
                cout << endl; //每行输出5个数据
        }
    }
}