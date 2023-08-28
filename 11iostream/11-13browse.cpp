#include <iostream>
#include <fstream>
using namespace std;
void browse(char *file, int delline)
{
    ifstream inf(file, ios::in);
    char s[80];
    for (int i = 1; i <= delline; i++) //读出开头的delline行，不显示
        inf.getline(s, 80);
    while (!inf.eof())
    {
        inf.getline(s, 80); //按行读出文件
        cout << s << endl;  //按行显示
    }
    inf.close();
}
int main()
{
    browse("students.txt", 0);
}