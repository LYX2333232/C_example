#include <iostream>
using namespace std;
int main()
{
    double operand1, operand2, result;
    char oper;
    cout << "input operand1,operator and operand2:";
    cin >> operand1 >> oper >> operand2; //������ʽ
    switch (oper)                        //�������������ѡ�����
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
        goto L; //�Ƿ������ת��L��ڵĿ����
    }
    cout << operand1 << oper << operand2 << '=' << result << endl;
L:; //�����
}