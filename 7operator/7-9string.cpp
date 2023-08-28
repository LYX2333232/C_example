#include <iostream>
#include <cstring>
using namespace std;
class String
{
    char *data;
    int size;

public:
    String(char *s)
    {
        size = strlen(s);
        data = new char(size + 1);
        strcpy_s(data, size + 1, s);
    }
    operator char *() const //类型转换函数
    {
        return data;
    }
};
int main()
{
    String sobj = "hell";
    char *svar = sobj; //把String型对象赋给字符串变量，进行了类型转换
    cout << svar << endl;
}