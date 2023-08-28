#include <iostream>
using namespace std;
int main()
{
    double operand1, operand2, result;
    char oper;
    cout << "input operand1,operator and operand2:";
    cin >> operand1 >> oper >> operand2; //输入表达式
    switch (oper)                        //根据运算符进行选择计算
    {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        result = operand1 / operand2;
        break;

    default:
        cout << "input error!" << endl;
        goto L; //非法运算符转向L入口的空语句
    }
    cout << operand1 << oper << operand2 << '=' << result << endl;
L:; //空语句
}