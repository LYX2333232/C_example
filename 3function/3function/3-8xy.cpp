#include <iostream>
#include <cmath>
using namespace std;
//����ԭ��ָ��Ĭ�ϲ���ֵ
double dist(double, double, double = 0, double = 0);
int main()
{
    double x1, x2, y1, y2;
    cout << "Enter point(x1,y1):";
    cin >> x1 >> y1;
    cout << "Enter point(x2,y2):";
    cin >> x2 >> y2;
    cout << "The distance of(" << x1 << "," << y1 << ")to(" << x2 << "," << y2 << "):" << dist(x1, y1, x2, y2) << endl; //ʹ��ָ������ֵ
    cout << "The distance of(" << x1 << "," << y1 << ")to(" << 0 << "," << 0 << "):" << dist(x1, y1) << endl;           //ʹ��Ĭ�ϲ���ֵ,x2,y2Ϊ0
    cout << "The distance of(" << x1 << "," << y1 << ")to(" << x2 << "," << 0 << "):" << dist(x1, y1, x2) << endl;      //ʹ��Ĭ�ϲ���ֵ,y2Ϊ0
}
double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}