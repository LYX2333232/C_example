#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char file[30], name[30];
    int number, score;
    ofstream outstuf; //建立输出文件流对象
    cout << "Please input the name of students file:\n";
    cin >> file;                  //输入文件名
    outstuf.open(file, ios::out); //连接文件，指定打开方式
    if (!outstuf)                 //调用重载运算符函数测试流
    {
        cerr << "File could not open." << endl;
        abort();
    }
    outstuf << "This is a file of students\n"; //写入一行标题
    cout << "Input the number,name,and score:"
         << "(Enter Ctrl+Z to end input)\n?";
    while (cin >> number >> name >> score)
    {
        outstuf << number << ' ' << name << ' ' << score << '\n'; //向流中插入数据
        cout << "?";
    }
    outstuf.close(); //关闭文件
}