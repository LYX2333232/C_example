#include <iostream>
using namespace std;
double max(double, double); //��������ԭ��
int main()
{
    double a, b, c, m1, m2;
    cout << "input a,b,c:\n";
    cin >> a >> b >> c;
    m1 = max(a, b);  //���ú���
    m2 = max(m1, c); //���ú���
    cout << "Maximum=" << m2 << endl;
}
double max(double x, double y) //���庯��
{
    if (x > y)
        return x;
    else
        return y;
}