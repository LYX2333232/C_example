#include <iostream>
using namespace std;
int main()
{
    int x, n = 0, s = 0;
    while (cin >> x) //�жϱ��ʽ����������ݣ��ú������ؽ�������ж�
    {
        n++, s += x;
    } //ע�⣬while����ѭ�����Ƕ��ű��ʽ
    cout << "n=" << n << endl
         << "sum=" << s << endl;
}