#include <iostream>
#include <fstream>
using namespace std;
struct student //定义记录
{
    int number;
    char name[30];
    int score;
};
const student mark = {0, "noname\0", 0}; //空记录，文件结束标志
int main()
{
    char s[80];
    student stu;
    ifstream inf("students.txt", ios::in); //读文本文件
    ofstream outf("students.dat", ios::out | ios::binary);
    // 写二进制数据文件
    if (!inf | !outf)
    {
        cerr << "File could not open." << endl;
        abort();
    }
    inf.getline(s, 80); //略去标题行
    // 从文本文件提取数据，并测试
    while (inf >> stu.number >> stu.name >> stu.score)
    {
        cout << stu.number << '\t' << stu.name << '\t' << stu.score << '\n'; //显示
        outf.write((char *)&stu, sizeof(student));                           //记录到二进制数据文件中
    }
    outf.write((char *)&mark, sizeof(student)); //写入文件结束标志
    inf.close();
    outf.close();
}