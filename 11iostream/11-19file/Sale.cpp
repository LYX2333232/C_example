//���۵Ǽǣ�������Ų����ļ�������ҵ����������������޸Ŀ����
#include "11-19.h"
void Sale(const char *fileDat)
{
    char choice;
    bookdata book;
    int key;
    long num;
    fstream fdat(fileDat, ios::in | ios::out | ios::binary);
    //�Զ�д��ʽ���ļ�
    cout << "********** ���۵Ǽ�**********\n";
    while (1)
    {
        cout << "���������ѡ��\n"
             << "1�����۵Ǽ�\tQ���˳�\n";
        cin >> choice;
        switch (choice)
        {
        case '1':
        {
            fdat.seekg(0, ios::beg); //��ָ����ļ�ͷ��ʼ����
            cout << "���(TP):\n?";
            cin >> key;
            do //����Ų���
            {
                //��һ����¼
                fdat.read((char *)&book, sizeof(bookdata));
            } while (book.TP != key && !endMark(book)); //�ж��Ƿ��ҵ�
            if (book.TP == key)                         //�ҵ���¼
            {
                cout << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
                cout << "��������:\n?";
                cin >> num;
                if (num > 0 && book.balance >= num) //���㹻�����
                    book.balance -= num;            //�޸Ŀ����
                else                                //û���㹻�Ŀ����
                {
                    cout << "�����������\n";
                    continue;
                }
                fdat.seekp(-long(sizeof(bookdata)), ios::cur); //�ļ�дָ�븴λ
                fdat.write((char *)&book, sizeof(bookdata));   //д�޸ĺ��¼
                cout << "�ֿ����\t\t" << book.balance << endl;
            }
            else //�Ҳ�����¼
            {
                cout << "����������\n";
            }
            break;
        }
        case 'Q':
        case 'q':
            return; //�˳����۵Ǽǣ��������˵�
        }
    }
    fdat.close(); //�ر��ļ�
}