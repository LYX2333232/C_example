#include <iostream>
#include <fstream>
using namespace std;
int copy(char *src, char *dest)
{
    char ch;
    ifstream infile(src, ios::in);    //打开源文件
    ofstream outfile(dest, ios::out); //打开目标文件
    if (!infile)
    {
        cerr << src << " : File could not open." << endl;
        return 0;
    }
    if (!outfile)
    {
        cerr << src << " : File could not open." << endl;
        return 0;
    }
    while (infile.get(ch)) //全部字符复制
        outfile.put(ch);
    infile.close();
    outfile.close();
    return 1;
    if (!infile)
    {
        cerr << src << " : File could not open." << endl;
        return 0;
    }
    if (!outfile)
    {
        cerr << src << " : File could not open." << endl;
        return 0;
    }
    while (infile.get(ch)) //全部字符复制
        outfile.put(ch);
    infile.close();
    outfile.close();
    cout << "finish !\n";
    return 1;
}
int main()
{
    char ch[80];
    cin >> ch;
    copy("students.txt", ch);
    return 0;
}