#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0;
    cin >> a;     //�����1�����ݣ�����ѭ������
    while (a > 0) // a>0ʱִ��ѭ��
    {
        sum += a; //�ۼ�a��ֵ
        cin >> a; //����һ���µ�aֵ
    }
    cout << "sum=" << sum << endl; //����ۼӽ��
}