#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x = 22.0 / 7;
    int i;
    cout << "Output in fixed:\n";
    cout << setiosflags(ios::fixed | ios::showpos); //定点输出，显示+
    for (i = 1; i <= 5; i++)
        cout << setprecision(i) << x << endl;
    cout << "Output in scientific:\n";
    cout << resetiosflags(ios::fixed | ios::showpos) //清除原设置
         << setiosflags(ios::scientific);            //用科学记数法输出
    for (i = 1; i <= 5; i++)
        cout << setprecision(i) << x * 1e5 << endl;
}