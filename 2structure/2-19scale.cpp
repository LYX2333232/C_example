#include <iostream>
using namespace std;
int main()
{
    int dec = 0;
    char ch;
    cout << "binary=";
    do //��ȥǰ���ַ���ֱ��ch��ŵ�һ���Ϸ�����
    {
        cin.get(ch);
    } while (ch != '0' && ch != '1');
    do //ѭ������λת��
    {
        dec += ch - '0';            //���ַ�ת��Ϊ���֣��ۼ�
        cin.get(ch);                //����һλ
        if (ch == '0' || ch == '1') //�����0��1

            dec *= 2; //�Ѿ�ת������������һλ

    } while (ch == '0' || ch == '1');  //�����0����1�ַ�ʱ������ѭ��
    cout << "decimal=" << dec << '\n'; //���ת�����
}