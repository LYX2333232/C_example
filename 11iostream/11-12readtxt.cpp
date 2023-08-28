#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[30], s[80];
    int number, score;
    int n = 0, max, min, total = 0;
    double ave;
    ifstream instuf("D:\\students.txt", ios::in); //���ļ�
    instuf.seekg(0, ios::beg);                   //��ָ�������ļ�ͷ
    if (!instuf)
    {
        cerr << "File could not open." << endl;
        abort();
    } 
    instuf.getline(s, 80);                    //��ȥ������
    while (instuf >> number >> name >> score) //��ȡ������
    {
        cout << number << '\t' << name << '\t' << score << "\n";
        if (n == 0)
            max = min = score;
        else
        {
            if (score > max)
                max = score;
            if (score < min)
                min = score;
        }
        total += score;
        n++;
    }
    ave = double(total) / n;
    cout << "maximal is :" << max << "\nminimal is :" << min << "\nnaverage is :" << ave << "\n";
    instuf.close();
}