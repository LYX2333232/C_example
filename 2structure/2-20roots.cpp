#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x0, x, epson;
    cout << "Input test root,x0=";
    cin >> x0; //���������ֵ
    cout << "Input precision,epson=";
    cin >> epson; //���뾫��
    do            //ѭ��
    {
        x = x0;                                                                            //����
        x0 = x - (pow(x, 3) + 2 * pow(x, 2) + 10 * x - 20) / (3 * pow(x, 2) + 4 * x + 10); //����ֵ
    } while (fabs(x0 - x) > epson);                                                        //�жϾ���
    cout << "The root is:" << x0 << endl;                                                  //������Ƹ�
}