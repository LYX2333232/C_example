#include "11-19.h"
extern const bookdata mark; //ʹ��ȫ�ֱ���
void Append(const char *fileDat)
{
    char choice;
    bookdata book;
    int key;
    long num;
    fstream fdat(fileDat, ios::in | ios::out | ios::binary);
    // �Զ�/д��ʽ���ļ�
    if (!fdat) //�ļ�������
    {
        cout << "��Ŀ�����ڣ�����г�ʼ������\n";
        return;
    }
    cout << "********** ���Ǽ�**********\n";
    while (1)
    {
        cout << "���������ѡ��\n1�������\t2�������\tQ���˳�\n";
        cin >> choice;
        switch (choice)
        {
        case '1': //׷���¼�¼
        {
            fdat.seekg(0, ios::beg); //��ָ���ƶ����ļ�ͷ
            do                       //�����ļ�β
            {
                //����һ����¼
                fdat.read((char *)&book, sizeof(bookdata));
            } while (!endMark(book)); //�ж��ļ�������־
            //��дָ��λ��
            fdat.seekp(-long(sizeof(bookdata)), ios::cur);
            cout << "���(TP),������������\n?"; //�����¼�¼��Ϣ
            cin >> book.TP;
            cout << "?";
            cin >> book.name;
            cout << "?";
            cin >> book.balance;
            fdat.write((char *)&book, sizeof(bookdata)); //д��¼
            fdat.write((char *)&mark, sizeof(bookdata)); //д�ļ�������־
            break;
        }
        case '2': //�޸����м�¼�����
        {
            fdat.seekg(0, ios::beg); //�ļ���ָ���Ƶ���ʼλ��
            cout << "���(TP)��\n";
            cin >> key; //�������
            do          //����Ų���
            {
                //��һ����¼
                fdat.read((char *)&book, sizeof(bookdata));
            } while (book.TP != key && !endMark(book)); //�ж��Ƿ��ҵ���¼
            if (book.TP == key)                         //�ҵ���¼
            {
                cout << book.TP << '\t' << book.name << '\t' << book.balance << endl;
                cout << "���������\n?";
                cin >> num;
                if (num > 0)
                    book.balance += num; //�޸Ŀ����
                else
                {
                    cout << "�����������\n";
                    continue;
                }
                // ��дָ��λ��
                fdat.seekp(-long(sizeof(bookdata)), ios::cur);
                // д�޸ĺ�ļ�¼
                fdat.write((char *)&book, sizeof(bookdata));
                cout << "�ֿ������\t\t" << book.balance << endl;
            }
            else //�Ҳ�����¼
                cout << "����������\n";
            break;
        }
        case 'Q':
        case 'q':
            return; //�˳����Ǽǣ��������˵�
            fdat.close();
        }
    }
}