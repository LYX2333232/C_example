#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 10; i <= 20; i++)
    {
        if (i % 2)    //��iΪ����
            continue; //ת����һ��ѭ��
        cout << i << " ";
    }
    cout << endl;
    for (i = 10; i <= 20; i++)
    {
        if (i % 2) //��iΪ����
            break; //��ֹѭ��
        cout << i << " ";
    }
    cout << endl;
}