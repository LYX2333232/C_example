#include <iostream>
using namespace std;
int main()
{
    int i, n;
    double x, max;
    cout << "n=";
    cin >> n;
    cin >> x;                //�����1������
    max = x;                 //�õ�һ���������ۼ�����ֵ
    for (i = 2; i <= n; i++) //ѭ������
    {
        cin >> x; //��������
        if (x > max)
            max = x; //��ǰ���ֵ
    }
    cout << "max=" << max << endl;
}