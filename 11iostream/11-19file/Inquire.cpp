//��ѯ
#include "11-19.h"
void Inquire(const char *fileDat)
{
    char choice;
    bookdata book;
    int key;
    fstream fdat(fileDat, ios::in | ios::binary); //�Զ���ʽ���ļ�
    cout << "********** ��ѯ**********\n";
    while (1)
    {
        cout << "���������ѡ��\n"
             << "1������Ų�ѯ\t2�����\tQ���˳�\n";
        cin >> choice;
        switch (choice)
        {
        case '1': //����ż���
        {
            fdat.seekg(0, ios::beg); //��ָ����ļ�ͷ��ʼ����
            cout << "���(TP)��\n?";
            cin >> key;
            do
            {
                ///��һ����¼
                fdat.read((char *)&book, sizeof(bookdata));
            } while (book.TP != key && !endMark(book)); //�ж��Ƿ��ҵ�
            if (book.TP == key)                         //�ҵ���¼
                cout << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
            else //�Ҳ�����¼
            {
                cout << "����������\n";
                continue;
            }
            break;
        }
        case '2': //����ļ�
        {
            do
            {

                fdat.read((char *)&book, sizeof(bookdata));
                if (!endMark(book)) //����ʾ�ռ�¼
                    cout << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
            } while (!endMark(book)); //�ж��ļ��Ƿ����
            break;
        }
        case 'Q':
        case 'q':
            return; //�˳���ѯ���������˵�
        }
    }
    fdat.close(); //�ر��ļ�
}