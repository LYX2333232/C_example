#include <iostream>
using namespace std;
double volume(double radius, double height);
int main()
{
    double v, r, h;
    cout << "Input radius and height :\n";
    cin >> r >> h;
    v = volume(r, h); //��r��h��ֵ���ݸ��β�
    cout << "Volume=" << v << endl;
}
double volume(double radius, double height) //�ڲ������ж���������ֵ����
{
    return 3.14 * radius * radius * height; //���ر��ʽ��ֵ
}