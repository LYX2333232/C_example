//查询
#include "11-19.h"
void Inquire(const char *fileDat)
{
    char choice;
    bookdata book;
    int key;
    fstream fdat(fileDat, ios::in | ios::binary); //以读方式打开文件
    cout << "********** 查询**********\n";
    while (1)
    {
        cout << "请输入操作选择\n"
             << "1：按书号查询\t2：浏览\tQ：退出\n";
        cin >> choice;
        switch (choice)
        {
        case '1': //按书号检索
        {
            fdat.seekg(0, ios::beg); //读指针从文件头开始检索
            cout << "书号(TP)；\n?";
            cin >> key;
            do
            {
                ///读一个记录
                fdat.read((char *)&book, sizeof(bookdata));
            } while (book.TP != key && !endMark(book)); //判断是否找到
            if (book.TP == key)                         //找到记录
                cout << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
            else //找不到记录
            {
                cout << "书号输入错误\n";
                continue;
            }
            break;
        }
        case '2': //浏览文件
        {
            do
            {

                fdat.read((char *)&book, sizeof(bookdata));
                if (!endMark(book)) //不显示空记录
                    cout << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
            } while (!endMark(book)); //判断文件是否结束
            break;
        }
        case 'Q':
        case 'q':
            return; //退出查询，返回主菜单
        }
    }
    fdat.close(); //关闭文件
}