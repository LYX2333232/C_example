#include <iostream>
using namespace std;
int main()
{
    int nl = 0, ng = 0;
    char ch;
    cin.get(ch);      //�����1���ַ�������ѭ������
    while (ch != '?') //ѭ������Ϊch!='?'
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            ++nl;
        else if (ch >= '0' && ch <= '9')
            ++ng;
        cin.get(ch);
    }
    cout << "\nnl=" << nl << "\nng=" << ng << '\n';
}