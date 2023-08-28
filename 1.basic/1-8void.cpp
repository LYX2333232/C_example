#include <iostream>
using namespace std;
int main()
{
    int a = 65;
    int *ip;
    void *vp = &a;               //定义无类型指针，以整变量地址初始化
    cout << *(int *)vp << endl;  //强制类型转换后访问对象
    cout << *(char *)vp << endl; //转换成字符型指针
    ip = (int *)vp;              //向整型指针赋值
    cout << (*ip) << endl;
}