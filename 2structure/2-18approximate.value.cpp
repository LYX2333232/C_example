#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int i;
    double sum, term, pi;
    sum = 1;
    i = 1;
    do
    {
        i += 1;                //������
        term = 1.0 / (i * i);  //���㵱ǰ��
        sum += term;           //�ۼ�
    } while (term >= 1.0e-12); //�����ж�
    pi = sqrt(sum * 6);
    cout << "pi=" << pi << endl;
}