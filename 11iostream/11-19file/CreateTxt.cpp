// �������ж����������ļ��е����ݣ�д���ı��ļ���
// ������ʽ�����ı��ļ�����������ʹ�ӡ
#include "11-19.h"
const char *fileTxt = "booksFile.txt"; //�ı��ļ���
void CreateTxt(const char *fileDat)
{
    fstream fdat(fileDat, ios::in | ios::binary); //�Զ���ʽ�򿪶����������ļ�
    fstream ftxt(fileTxt, ios::out);              //��д��ʽ�������ı��ļ�
    fdat.seekp(0, ios::beg);                      //�����������ļ���ָ���Ƶ��ļ�ͷ
    bookdata book;
    cout << "********** �����ı��ļ�**********\n";
    do
    {
        fdat.read((char *)&book, sizeof(bookdata)); //�Ӷ����������ļ��ж���¼
        if (!endMark(book))                         //�Ѽ�¼д���ı��ļ���
            ftxt << book.TP << '\t' << book.name << '\t' << book.balance << '\n';
    } while (!endMark(book));
    ftxt.close(); //�ر��ı�
    cout << "�ı��ļ��Խ�����Ҫ����ļ���(Y/N)\n";
    char answer, s[80];
    cin >> answer;
    if (answer == 'Y' || answer == 'y')
    {
        ftxt.open("booksFile.txt", ios::in); //���������ļ�
        while (!ftxt.eof())                  //���������ı��ļ�
        {
            ftxt.getline(s, 80);
            cout << s << endl;
        }
        ftxt.close(); //�ر��ı��ļ�
    }
    fdat.close(); //�رն����������ļ�
}