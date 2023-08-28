#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter first sentence followed by Enter\n";
    while ((c = cin.get()) != '\n') //输入并显示一行字符
        cout.put(c);
    cout << endl;
    cout << "Enter second sentence followed by Enter\n";
    while (cin.get(c)) //输入并显示一行字符
    {
        if (c == '\n')
            break;
        cout.put(c);
    }
    cout << endl;
    cout << "Enter third sentence followed by Enter\n";
    char s[80];
    cin.get(s, 10);    //读取9个字符
    cout << s << endl; //显示
}