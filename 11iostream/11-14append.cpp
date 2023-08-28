#include <iostream>
#include <fstream>
using namespace std;
int Append(char *file)
{
    char name[30], ch;
    int number, score;
    ofstream outstuf(file, ios::app); //以追加的方式打开文件
    if (!outstuf)
    {
        cerr << "File could not open." << endl;
        return 0;
    }
    cout << "Do you want append record to " << file << "?(Y or N)\n";
    cin >> ch; //用户应答
    while (ch == 'Y' || ch == 'y')
    {
        cout << "Input the number, name, and score :\n";
        cin >> number >> name >> score;
        outstuf << number << ' ' << name << ' ' << score << '\n'; //追加一个记录
        cout << "?(Y or N) ";
        cin >> ch; //用户应答
        if (ch == 'N' || ch == 'n')
            cout << "Close file.\n";
    }
    outstuf.close();
    return 1;
}
int main()
{
    Append("students.txt");
}