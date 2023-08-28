#include <iostream>
using namespace std;
void display(const int &rk) //定义const引用参数
{
    cout << rk << ":\n";
    cout << "dec:" << rk << endl;
    cout << "oct:" << oct << rk << endl;
    cout << "hex:" << hex << rk << endl;
}
int main()
{
    int m = 2618;
    display(m);    //实参是变量
    display(4589); //实参是常数
}