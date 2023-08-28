#include <iostream>
using namespace std;
int main()
{
    int total = 0, n = 0, k;
    cout << "input:\n";
    while (cin >> k) //按Ctrl+Z组合键结束输入，流错误状态字的文件结束位被置1
    {
        total += k;
        n++;
    }
    cin.clear(); //状态字清0，回复流状态
    cout << "again:\n";
    while (cin >> k)
    {
        total += k;
        n++;
    }
    cout << "total=" << total << "\tn=" << n << endl;
}