#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, s, area;
    cout << "���������εı߳���\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a) //�жϹ��������ε�����
    {
        s = (a + b + c) / 2; //�������
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "area=" << area << endl;
    }
    else
        cout << "It is not a trilateral!" << endl;
}