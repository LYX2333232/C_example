//销售登记，根据书号查找文件，如果找到，则用销售数量修改库存量
#include "11-19.h"
void Sale(const char *fileDat)
{
    char choice;
    bookdata book;
    int key;
    long num;
    fstream fdat(fileDat, ios::in | ios::out | ios::binary);
    //以读写方式打开文件
    cout << "********** 销售登记**********\n";
    while (1)
    {
        cout << "请输入操作选择\n"
             << "1：销售登记\tQ：退出\n";
        cin >> choice;
        switch (choice)
        {
        case '1':
        {
            fdat.seekg(0, ios::beg); //读指针从文件头开始检索
            cout << "书号(TP):\n?";
            cin >> key;
            do //按书号查找
            {
                //读一个记录
                fdat.read((char *)&book, sizeof(bookdata));
            } while (book.TP != key && !endMark(book)); //判断是否找到
            if (book.TP == key)                         //找到记录
            {
                cout << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
                cout << "销售数量:\n?";
                cin >> num;
                if (num > 0 && book.balance >= num) //有足够库存量
                    book.balance -= num;            //修改库存量
                else                                //没有足够的库存量
                {
                    cout << "数量输入错误\n";
                    continue;
                }
                fdat.seekp(-long(sizeof(bookdata)), ios::cur); //文件写指针复位
                fdat.write((char *)&book, sizeof(bookdata));   //写修改后记录
                cout << "现库存量\t\t" << book.balance << endl;
            }
            else //找不到记录
            {
                cout << "书号输入错误\n";
            }
            break;
        }
        case 'Q':
        case 'q':
            return; //退出销售登记，返回主菜单
        }
    }
    fdat.close(); //关闭文件
}