#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m, i, k, n = 0;
    for (m = 2; m <= 100; m++) //ѭ��������ÿ��mֵ
    {
        k = int(sqrt(double(m))); //ȡ���Է�Χ
        i = 2;
        while (m % i && i <= k) //����m��Լ��
            i++;
        if (i > k) //û�д���1��Լ��
        {
            cout << m << '\t'; //�������
            n += 1;            //��¼��������
            if (n % 5 == 0)
                cout << endl; //ÿ�����5������
        }
    }
}