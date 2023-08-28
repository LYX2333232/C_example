#include <iostream>
using namespace std;
int main()
{
    int dec = 0;
    char ch;
    cout << "binary=";
    do //略去前导字符，直至ch存放第一个合法数字
    {
        cin.get(ch);
    } while (ch != '0' && ch != '1');
    do //循环，逐位转换
    {
        dec += ch - '0';            //把字符转换为数字，累加
        cin.get(ch);                //读入一位
        if (ch == '0' || ch == '1') //如果是0或1

            dec *= 2; //已经转换的数据左移一位

    } while (ch == '0' || ch == '1');  //读入非0，非1字符时，结束循环
    cout << "decimal=" << dec << '\n'; //输出转换结果
}