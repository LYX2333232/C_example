// 读出已有二进制数据文件中的数据，写入文本文件中
// 建立格式化的文本文件，便于浏览和打印
#include "11-19.h"
const char *fileTxt = "booksFile.txt"; //文本文件名
void CreateTxt(const char *fileDat)
{
    fstream fdat(fileDat, ios::in | ios::binary); //以读方式打开二进制数据文件
    fstream ftxt(fileTxt, ios::out);              //以写方式打开数据文本文件
    fdat.seekp(0, ios::beg);                      //二进制数据文件读指针移到文件头
    bookdata book;
    cout << "********** 建立文本文件**********\n";
    do
    {
        fdat.read((char *)&book, sizeof(bookdata)); //从二进制数据文件中读记录
        if (!endMark(book))                         //把记录写入文本文件中
            ftxt << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
    } while (!endMark(book));
    ftxt.close(); //关闭文本
    cout << "文本文件以建立，要浏览文件吗？(Y/N)\n";
    char answer, s[80];
    cin >> answer;
    if (answer == 'Y' || answer == 'y')
    {
        ftxt.open("booksFile.txt", ios::in); //重用流打开文件
        while (!ftxt.eof())                  //按行线束文本文件
        {
            ftxt.getline(s, 80);
            cout << s << endl;
        }
        ftxt.close(); //关闭文本文件
    }
    fdat.close(); //关闭二进制数据文件
}