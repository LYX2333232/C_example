#include "11-19.h"
extern const bookdata mark; //使用全局变量
void Append(const char *fileDat)
{
    char choice;
    bookdata book;
    int key;
    long num;
    fstream fdat(fileDat, ios::in | ios::out | ios::binary);
    // 以读/写方式打开文件
    if (!fdat) //文件不存在
    {
        cout << "账目不存在，请进行初始化操作\n";
        return;
    }
    cout << "********** 入库登记**********\n";
    while (1)
    {
        cout << "请输入操作选择\n1：新书号\t2；旧书号\tQ：退出\n";
        cin >> choice;
        switch (choice)
        {
        case '1': //追加新记录
        {
            fdat.seekg(0, ios::beg); //读指针移动到文件头
            do                       //查找文件尾
            {
                //读入一个记录
                fdat.read((char *)&book, sizeof(bookdata));
            } while (!endMark(book)); //判断文件结束标志
            //置写指针位置
            fdat.seekp(-long(sizeof(bookdata)), ios::cur);
            cout << "书号(TP),书名，数量：\n?"; //输入新记录信息
            cin >> book.TP;
            cout << "?";
            cin >> book.name;
            cout << "?";
            cin >> book.balance;
            fdat.write((char *)&book, sizeof(bookdata)); //写记录
            fdat.write((char *)&mark, sizeof(bookdata)); //写文件结束标志
            break;
        }
        case '2': //修改已有记录库存量
        {
            fdat.seekg(0, ios::beg); //文件读指针移到开始位置
            cout << "书号(TP)：\n";
            cin >> key; //输入书号
            do          //按书号查找
            {
                //读一个记录
                fdat.read((char *)&book, sizeof(bookdata));
            } while (book.TP != key && !endMark(book)); //判断是否找到记录
            if (book.TP == key)                         //找到记录
            {
                cout << book.TP << '\t' << book.name << '\t' << book.balance << endl;
                cout << "入库数量：\n?";
                cin >> num;
                if (num > 0)
                    book.balance += num; //修改库存量
                else
                {
                    cout << "数量输入错误\n";
                    continue;
                }
                // 置写指针位置
                fdat.seekp(-long(sizeof(bookdata)), ios::cur);
                // 写修改后的记录
                fdat.write((char *)&book, sizeof(bookdata));
                cout << "现库存量：\t\t" << book.balance << endl;
            }
            else //找不到记录
                cout << "书号输入错误\n";
            break;
        }
        case 'Q':
        case 'q':
            return; //退出入库登记，返回主菜单
            fdat.close();
        }
    }
}