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
        i += 1;                //计数器
        term = 1.0 / (i * i);  //计算当前项
        sum += term;           //累加
    } while (term >= 1.0e-12); //精度判断
    pi = sqrt(sum * 6);
    cout << "pi=" << pi << endl;
}