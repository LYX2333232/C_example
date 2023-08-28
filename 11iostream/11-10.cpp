#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    ostringstream Output; //建立输出串流类对象，连接一个匿名的string对象
    double x, y;
    cout << "Input x:\n";
    cin >> x;
    cout << "Input y:\n";
    cin >> y;
    Output << x << "*" << y << "=" << x * y << endl; //插入数据项
    cout << Output.str();                            //输出匿名string对象
}