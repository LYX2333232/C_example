#include "11-19.h"
extern const bookdata mark; //ʹ��ȫ�ֱ���
void Initial(const char *fileDat)
{
    //��д��ʽ�򿪣����������ļ�
    fstream fdat(fileDat, ios::out | ios::binary);
    cout << "����Ŀ�ļ����ڣ���ɾ��ԭ�����ݣ�Ҫ�����ļ���ʽ���𣿣�Y/N��\n";
    char answer;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        fdat.seekp(0, ios::beg);                     //��ָ���Ƶ��ļ�ͷ
        fdat.write((char *)&mark, sizeof(bookdata)); //д��ռ�¼
        cout << "�ļ��Ѿ���ʼ��\n";
    }
    else
        cout << "ȡ������\n";
    fdat.close(); //�ر��ļ�
}