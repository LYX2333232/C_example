#include <iostream>
using namespace std;
double max(double, double, double);
int main()
{
    double a, b, c, s;
    cout << "a,b,c=";
    cin >> a >> b >> c;
    //���ε���max���������ʽ��Ϊʵ��
    s = max(a, b, c) / (max(a + b, b, c) * max(a, b, b + c));
    cout << "s=" << s << endl;
}
double max(double x, double y, double z)
{
    double m;
    if (x > y)
        m = x;
    else
        m = y;
    if (z > m)
        m = z;
    return m;
}