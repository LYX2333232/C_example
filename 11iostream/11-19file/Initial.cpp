#include "11-19.h"
extern const bookdata mark; //使用全局变量
void Initial(const char *fileDat)
{
    //以写方式打开，建立新新文件
    fstream fdat(fileDat, ios::out | ios::binary);
    cout << "若账目文件存在，将删除原有数据，要进行文件格式化吗？（Y/N）\n";
    char answer;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        fdat.seekp(0, ios::beg);                     //将指针移到文件头
        fdat.write((char *)&mark, sizeof(bookdata)); //写入空记录
        cout << "文件已经初始化\n";
    }
    else
        cout << "取消操作\n";
    fdat.close(); //关闭文件
}