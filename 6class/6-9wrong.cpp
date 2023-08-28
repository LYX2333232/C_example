#include <iostream>
#include <cstring>
using namespace std;
class name
{
public:
    name(char *pn);
    ~name();
    void setname(char *);
    void showname();

protected:
    char *pname;
    int size;
};
name::name(char *pn)
{
    cout << "Constructing" << pn << endl;
    pname = new char[strlen(pn) + 1];
    if (pname != 0)
        strcpy_s(pname, strlen(pn) + 1, pn);
    size = strlen(pn);
}
name::~name()
{
    cout << "Destructing" << pname << endl;
    delete[] pname;
    pname = NULL;
    size = 0;
}
void name::setname(char *pn)
{
    delete[] pname;
    pname = new char[strlen(pn) + 1];
    if (pname != 0)
        strcpy_s(pname, strlen(pn) + 1, pn);
    size = strlen(pn);
}
void name::showname()
{
    cout << pname << endl;
}
int main()
{
    name obj1("noname");
    name obj2 = obj1; //系统实现数据复制
    obj1.setname("ZhangSan");
    obj2.showname(); //将显示"zhangsan"
}