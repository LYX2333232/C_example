#include <iostream>
#include <cstring>
using namespace std;
struct date
{
    int year, month, day;
};
class student
{
public:
    student(int y, int m, int d, int num = 0, char *pname = "no name");
    void printstudent() const; //����Ա����
private:
    const int code; //�����ݳ�Ա
    char name[20];
    date birthday; //�ṹ���ݳ�Ա
};
void student::printstudent() const
{
    cout << "��ţ�" << code << "\t������" << name << '\t' << "�������ڣ�" << birthday.year << '-' << birthday.month << '-' << birthday.day << endl;
}
//�ô��������캯��������ݳ�Ա��ʼ��
student::student(int y, int m, int d, int num, char *pname) : code(num)
{
    strcpy_s(name, pname);
    name[sizeof(name) - 1] = '\0';
    birthday.year = y;
    birthday.month = m;
    birthday.day = d;
}
int main()
{
    student stu1(1990, 3, 21, 1001, "�´�");
    stu1.printstudent();
    student stu2(1985, 10, 1, 1002, "���컪");
    stu2.printstudent();
    system("pause");
}
