#include <iostream>
#include <fstream>
using namespace std;
struct student //定义记录
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
    ifstream inf("students.dat", ios::in); //打开二进制数据文件
    if (!inf)
    {
        cerr << "File could not open." << endl;
        abort();
    }
    do
    {
        inf.read((char *)&stu, sizeof(stu)); //读取一个记录
        if (stu.number != 0)
        {
            cout << stu.number << '\t' << stu.name << '\t' << stu.score << '\n';
            if (n == 0)
                max = min = stu.score; //变量赋初值
            else
            {
                if (stu.score > max)
                    max = stu.score;
                if (stu.score < min)
                    min = stu.score;
            }
            total += stu.score; //累加总分
            n++;                //累计总人数
        }
    } while (inf && stu.number != 0); //判断文件结束和记录有效性
    cout << "总人数：" << n << endl;
    ave = double(total) / n;
    cout << "最高分：" << max << "\n最低分：" << min << "\n平均分：" << ave << endl;
    inf.close(); //关闭文件
}