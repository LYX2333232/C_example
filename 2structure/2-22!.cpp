#include <iostream>
using namespace std;
int main()
{
    int i, n;
    long int t;
    cout << "input one integer n(n<=16):";
    cin >> n;
    t = 1;                   //�˷�����ֵΪ1
    for (i = 2; i <= n; i++) //������ѭ����׳�
        t *= i;
    cout << n << "!=" << t << endl;
}