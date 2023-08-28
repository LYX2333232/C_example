#include <iostream>
#include <cstring>
using namespace std;
class name
{
public:
    name(char *pn);
    name(const name &obj);
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
name::name(const name &obj) //定义拷贝构造函数
{
    cout << "Copying" << obj.pname << "into its own block\n";
    pname = new char[strlen(obj.pname) + 1];
    if (pname != 0)
        strcpy_s(pname, strlen(obj.pname) + 1, obj.pname);
    size = obj.size;
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
    name obj2 = obj1; //调用拷贝构造函数
    obj1.showname();
    obj2.showname();
    obj1.setname("SuDongpo"); //对obj1置值
    obj2.setname("DuFu");     //对obj2置值
    obj1.showname();
    obj2.showname();
}