#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "ch=";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') // ch是大写字母
        ch += 32;               //转换成小写字母
    cout << ch << endl;
}