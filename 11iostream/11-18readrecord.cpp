#include <iostream>
#include <fstream>
using namespace std;
struct student //�����¼
{
    int number;
    char name[30];
    int score;
};
int main()
{
    student stu;
    int n = 0, max, min, total = 0;
    double ave;
    ifstream inf("students.dat", ios::in); //�򿪶����������ļ�
    if (!inf)
    {
        cerr << "File could not open." << endl;
        abort();
    }
    do
    {
        inf.read((char *)&stu, sizeof(stu)); //��ȡһ����¼
        if (stu.number != 0)
        {
            cout << stu.number << '\t' << stu.name << '\t' << stu.score << '\n';
            if (n == 0)
                max = min = stu.score; //��������ֵ
            else
            {
                if (stu.score > max)
                    max = stu.score;
                if (stu.score < min)
                    min = stu.score;
            }
            total += stu.score; //�ۼ��ܷ�
            n++;                //�ۼ�������
        }
    } while (inf && stu.number != 0); //�ж��ļ������ͼ�¼��Ч��
    cout << "��������" << n << endl;
    ave = double(total) / n;
    cout << "��߷֣�" << max << "\n��ͷ֣�" << min << "\nƽ���֣�" << ave << endl;
    inf.close(); //�ر��ļ�
}