#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "ch=";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') // ch�Ǵ�д��ĸ
        ch += 32;               //ת����Сд��ĸ
    cout << ch << endl;
}