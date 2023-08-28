#include <iostream>
using namespace std;
void simple()
{
    cout << "It is a simple program.\n";
}
int main()
{
    cout << "Call funtion...\n";
    simple();     //名方式调用
    (&simple)();  //地址方式调用
    (*&simple)(); //间址调用
    cout << "Address of function :\n";
    cout << simple << endl;   //函数名是地址
    cout << &simple << endl;  //取函数地址
    cout << *&simple << endl; //函数地址所指对象
}