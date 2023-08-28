#include <iostream>
using namespace std;
int main()
{
    char *s = "Hello";
    cout.fill('*');       //置填充符
    cout.width(10);       //置输出宽度
    cout.setf(ios::left); //左对齐
    cout << s << endl;
    cout.width(15);                   //置输出宽度
    cout.setf(ios::right, ios::left); //清除左对齐标志位，置右对齐
    cout << s << endl;
}