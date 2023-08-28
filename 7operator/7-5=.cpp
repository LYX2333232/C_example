#include <iostream>
#include <cstring>
using namespace std;
class name
{
protected:
    char *pname;
    int size;

public:
    name(char *pn = "\0");
    name(const name &);
    name &operator=(name);
    ~name();
};
name::name(char *pn)
{
    cout << "Constructing " << pn << endl;
    size = strlen(pn);
    pname = new char[size + 1];
    if (pname != 0)
        strcpy_s(pname, size + 1, pn);
}
name::name(const name &obj) //定义拷贝构造函数
{
    cout << "Copying" << obj.pname << " into its own block\n";
    size = obj.size;
    pname = new char[size + 1];
    if (pname != 0)
        strcpy_s(pname, size + 1, obj.pname);
}
name &name::operator=(name obj) //重载赋值运算符
{
    delete[] pname;
    size = obj.size;
    pname = new char[size + 1];
    if (pname != 0)
        strcpy_s(pname, size + 1, obj.pname);
    return *this;
}
name::~name()
{
    cout << "Destructing " << pname << endl;
    pname[0] = '\0';
    delete[] pname;
    pname = NULL;
    size = 0;
}
int main()
{
    name obj1("ZhangSan");
    name obj2 = obj1; //调用拷贝构造函数
    name obj3("NoName");
    obj3 = obj2 = obj1; //调用重载赋值运算符函数
}