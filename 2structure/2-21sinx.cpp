#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int n;
    double x, term, sum;
    cout << "x=";
    cin >> x; //����x��ֵ
    n = 1;    //�ü�������ֵ
    sum = x;  //���ۼ�����ֵ
    term = x; //��ǰ��
    do        //ѭ��
    {
        n += 2;                                 //������+2
        term *= (-x * x) / (n - 1) / n;         //��ǰ���ֵ
        sum += term;                            //��ǰ�ۼӺ�
    } while (fabs(term) >= 1e-8);               //�жϾ���
    cout << "sin(" << x << ")=" << sum << endl; //���������
}