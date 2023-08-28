#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Please input a in decimal:";
    cin.setf(ios::dec, ios::basefield); //置十进制数形式输入
    cin >> a;
    cout << "Please input b in hexadecimal:";
    cin.setf(ios::hex, ios::basefield); //置十六进制数形式输入
    cin >> b;
    cout << "Please input c in octal:";
    cin.setf(ios::dec, ios::basefield); //置八进制数形式输入
    cin >> c;
    cout << "Output in decimal :\n";
    cout.setf(ios::dec, ios::basefield); //置十进制数形式输出
    cout << "a= " << a << " b= " << b << " c= " << c << endl;
    cout << "Output in hexadecimal :\n";
    cout.setf(ios::hex, ios::basefield); //置十六进制数形式输出
    cout << "a= " << a << " b= " << b << " c= " << c << endl;
    cout << "Output in octal :\n";
    cout.setf(ios::oct, ios::basefield); //置八进制数形式输出
    cout << "a= " << a << " b= " << b << " c= " << c << endl;
}