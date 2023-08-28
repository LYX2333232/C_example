#include <iostream>
using namespace std;
class settype
{
private:
    unsigned *set; //建立动态数组指针
    unsigned n;    //数组长度
    unsigned e;    //全集原酸个数
public:
    settype(unsigned e = 128);                              //构造函数
    settype(const settype &b);                              //拷贝构造函数
    ~settype();                                             //析构函数
    settype operator+=(unsigned x);                         //重载+=，把元素x并入集合中
    settype operator=(settype b);                           //重载=，集合变量赋值
    settype operator()(unsigned x = 0);                     //重载()，集合置元素x，默认参数置空
    settype operator+(settype b);                           //重载+，求并集
    settype operator*(settype b);                           //重载*，求交集
    settype operator-(settype b);                           //重载-，求差集
    bool operator<=(settype b);                             //重载<=，判包含
    bool operator!();                                       //重载！，判空集。集合空返回true,否则返回false
    friend bool operator<(unsigned x, settype a);           //重载<,判元素属于集合
    friend istream &operator>>(istream &input, settype a);  //重载>>，输入集合元素
    friend ostream &operator<<(ostream &output, settype a); //重载<<,输出集合的全部元素
};
// steOperate.cpp
settype::settype(unsigned e) //构造函数
{
    n = (e + 31) / 32;
    set = new unsigned[n];
    for (unsigned i = 0; i < n; i++)
        set[i] = 0;
}
settype::settype(const settype &b) //拷贝构造函数
{
    n = b.n;
    e = 32 * n;
    set = new unsigned[n];
    for (unsigned i = 0; i < n; i++)
        set[i] = b.set[i];
}
settype::~settype() //析构函数
{
    delete[] set;
    n = 0;
    e = 0;
}
settype settype::operator+=(unsigned x) //重载+=，把元素x并入集合中
{
    unsigned bitmask = 1;
    bitmask <<= ((x - 1) % 32); //等价于bitmask=bitmask<<((x-1)%32)，相当于bitmask左移了((x-1)%32)位
    set[(x - 1) / 32] |= bitmask;
    return *this;
}
settype settype::operator=(settype b) //重载=，集合变量赋值
{
    for (unsigned i = 0; i < n; i++)
        set[i] = b.set[i];
    return *this;
}
settype settype::operator()(unsigned x) //重载()，集合置元素x，默认参数置空
{
    unsigned bitmask = 1;
    for (unsigned i = 0; i < n; i++)
        set[i] = 0;
    if (x)
    {
        bitmask <<= ((x - 1) % 32);
        set[(x - 1) / 32] |= bitmask;
    }
}
settype settype::operator+(settype b) //重载+，求并集
{
    settype t(32 * n);
    for (unsigned i = 0; i < n; i++)
        t.set[i] = set[i] | b.set[i];
    return t;
}
settype settype::operator*(settype b) //重载*，求交集
{
    settype t(32 * n);
    for (unsigned i = 0; i < n; i++)
        t.set[i] = set[i] & b.set[i];
    return t;
}
settype settype::operator-(settype b) //重载-，求差集
{
    settype t(32 * n);
    for (unsigned i = 0; i < n; i++)
    {
        t.set[i] = set[i] & (~(set[i] & b.set[i]));
        return t;
    }
}
bool settype::operator<=(settype b) //重载<=，判包含
{
    bool t = true;
    for (unsigned i = 0; i < n; i++)
        if ((set[i] | b.set[i]) != b.set[i])
            t = false;
    return t;
}
bool settype::operator!() //重载！，判空集。集合空返回true,否则返回false
{
    bool t = true;
    for (unsigned i = 0; i < n; i++)
        if (set[i])
        {
            t = false;
            break;
        }
    return t;
}
bool operator<(unsigned x, settype a) //重载<,判元素属于集合
{
    unsigned bitmask = 1;
    bitmask <<= ((x - 1) % 32);
    if (a.set[(x - 1) % 32] & bitmask)
        return true;
    return false;
}
istream &operator>>(istream &input, settype a) //重载>>，输入集合元素
{
    unsigned x;
    input >> x;
    while (x)
    {
        a += x; //把元素x并入集合a中
        input >> x;
    }
    return input;
}
ostream &operator<<(ostream &output, settype a) //重载<<,输出集合的全部元素
{
    unsigned c, i;
    unsigned bitmask;
    if (!a)
    {
        output << "{  }";
        return output;
    }
    output << "{";
    for (i = 0; i < a.n; i++) //处理每个数组元素
    {
        bitmask = 1;              //掩码
        for (c = 1; c <= 32; c++) //按位处理
        {
            if (a.set[i] & bitmask)
                output << i * 32 + c << ",";
            bitmask <<= 1;
        }
    }
    output << "\b\b}"; //擦除最后一个元素之后的逗号
    return output;
}
int main()
{
    settype seta, setb, setc;
    unsigned x;
    cout << "Input the elements of seta,1-128,until input 0:\n";
    cin >> seta; //输入seta的元素
    cout << "Input the elements of setb,1-128,until input 0:\n";
    cin >> setb;                     //输入setb的元素
    cout << "seta=" << seta << endl; //输出seta的元素
    cout << "setb=" << setb << endl; //输出setb的元素
    cout << "Input x:";
    cin >> x;
    seta += x;          //把元素x并入seta中
    cout<<"Put "<<x<<" in seta="<<seta<<endl;
    setc = seta + setb; //求并集
    cout << "setc=seta+setb=" << setc << endl;
    setc = seta * setb; //求交集
    cout << "setc=seta*setb=" << setc << endl;
    setc = seta - setb; //求差集
    cout << "setc=seta-setb=" << setc << endl;
    if (seta <= setb) //判断seta是否包含于setb
        cout << "seta<=setb\n";
    else
        cout << "not seta<=setb\n";
    cout << "Input x:";
    cin >> x;
    if (x < seta) //判断元素x是否属于seta
        cout << x << " in " << seta << '\n';
    else
        cout << x << " not in " << seta << '\n';
    setc = seta + setb + setc; //多个集合变量运算
    cout << "setc=seta+setb+setc=" << setc << endl;
    setc(); //置setc为空集
    cout << "setc=" << setc << endl;
}