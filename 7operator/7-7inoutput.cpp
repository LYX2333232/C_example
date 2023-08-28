#include <iostream>
using namespace std;
class vector
{
private:
    int *v;
    int len;

public:
    vector(int = 1);          //默认构造长度
    vector(const int *, int); //使用数组参数构造函数
    vector(const vector &);   //拷贝构造函数
    ~vector();                //析构函数
    //重载运算符
    int &operator[](int i) const;
    int operator()() const;
    vector &operator=(const vector &);
    bool operator==(const vector &) const;
    bool operator!=(const vector &) const;
    friend vector operator+(const vector &, const vector &);
    friend ostream &operator<<(ostream &output, const vector &);
    friend istream &operator>>(istream &input, vector &);
};
//构造指定长度向量，并初始化数据元素为0
vector::vector(int size)
{
    if (size <= 0 || size > 100)
    {
        cout << "The size of " << size << " is fail !\n";
        exit(0);
    }
    v = new int[size];
    for (int i = 0; i < size; i++)
        v[i] = 0;
    len = size;
}
//用整型数组构造向量
vector::vector(const int *b, int size)
{
    if (size <= 0 || size > 100)
    {
        cout << "The size of " << size << " is fail !\n";
        exit(0);
    }
    v = new int[size];
    len = size;
    for (int i = 0; i < size; i++)
        v[i] = b[i];
}
//用已有对象复制构造向量
vector::vector(const vector &a)
{
    len = a();
    v = new int[len];
    for (int i = 0; i < len; i++)
        v[i] = a[i];
}
//析构
vector::~vector()
{
    delete[] v;
    len = 0;
}
//返回向量元素
int &vector::operator[](int i) const
{
    if (i >= 0 && i < len)
        return v[i];
    cout << "The subscript " << i << " is outside !\n";
    exit(0);
}
//返回向量长度
int vector::operator()() const
{
    return len;
}
//向量赋值
vector &vector::operator=(const vector &b)
{
    if (len = b())
    {
        for (int i = 0; i < len; i++)
            v[i] = b.v[i];
        return *this;
    }
    else
    {
        cout << "Operator=fail!\n";
        exit(0);
    }
}
//判断两个向量相等
bool vector::operator==(const vector &b) const
{
    if (len == b.len)
    {
        for (int i = 0; i < len; i++)
        {
            if (v[i] != b.v[i])
                return false;
        }
    }
    else
        return false;
    return true;
}
//判断两个向量不相等
bool vector::operator!=(const vector &b) const
{
    return !(*this == b); //调用(*this).operator==(b)
}
//向量相加
vector operator+(const vector &a, const vector &b)
{
    int size = a();
    int *t = new int[size];
    if (size == b()) //调用b.operator()()返回b.len
    {
        for (int i = 0; i < size; i++)
        {
            t[i] = a.v[i] + b.v[i];
            return vector(t, size); //用数组构造返回对象
        }
    }
    else
    {
        cout << "Operator fail!\n";
        exit(0);
    }
} //输出向量
ostream &operator<<(ostream &output, const vector &a)
{
    for (int i = 0; i < a.len; i++)
        output << a.v[i] << " "; //使用系统版的<<运算符
    return output;
}
istream &operator>>(istream &input, vector &a) //输入向量
{
    for (int i = 0; i < a.len; i++)
        input >> a.v[i]; //使用系统版的>>运算符
    return input;
}
int main()
{
    int k;
    cout << "Input the length of Vector :\n";
    cin >> k;
    vector a(k), b(k), c(k); //构造指定长度向量
    cout << "Input the elements of Vector a:\n";
    cin >> a; //调用operator>>(cin,a)
    cout << "Input the elements of Vector b:\n";
    cin >> b;   //调用operator>>(cin,b)
    if (a == b) //调用a.operator==(b)
    {
        for (int i = 0; i < a(); i++)
            c[i] = a[i] * 2; //调用c.operator[](i)和a.operator[](i)
    }
    else
        c = a + b; //调用operator+(a,b)和c.operator=(a+b)
    //调用operator<<(cout,a)、operator<<(cout,b)、operator<<(cout,c)
    cout << "[" << a << "]\n+[" << b << "]\n=[" << c << "]" << '\n';
}