#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    char c;
    while ((c = cin.get()) != '.') //�жϱ��ʽ�е��ñ�׼����
        n++;
    cout << "n=" << n << endl;
}