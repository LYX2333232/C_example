#include <iostream>
using namespace std;
int main()
{
    int i, n, n1, n2, n3;
    double score;
    cout << "n=";
    cin >> n;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    for (i = 1; i <= n; i++) //循环计算学生人数
    {
        cin >> score; //输入一个学生的成绩
        if (score >= 85)
            n1++;
        else if (score >= 60)
            n2++;
        else
            n3++;
    }
    cout << "85--100:" << n1 << endl;
    cout << "60--84:" << n2 << endl;
    cout << "80--59:" << n3 << endl;
}