#include <iostream>
using namespace std;
class rational
{
private:
    int numerator, denominator;

public:
    rational();                                                    //构造函数
    rational(int n, int d = 1);                                    //构造函数
    rational(double x);                                            //构造函数
    operator double();                                             //类型转换函数，把rational转换成double型
    friend rational operator+(const rational &, const rational &); //重载+
    friend ostream &operator<<(ostream &, const rational &);       //重载<<
};
int gcd(int a, int b); //函数原型，求最大公约数
rational::rational()   //构造等于0的对象
{
    numerator = 0;
    denominator = 0;
}
rational::rational(int n, int d) //用分子、分母构造对象
{
    int g;
    if (d == 1) //分母等于1
    {
        numerator = n;   //分子
        denominator = d; //分母
    }
    else //分母不等于1的有理数
    {
        g = gcd(n, d);     //求分子、分母的最大公约数
        numerator = n / g; //约分
        denominator = d / g;
    };
}
rational::rational(double x) //用实数构造对象
{
    int a, b, g;
    a = int(x * 1e5);  //分子
    b = int(1e5);      //分母
    g = gcd(a, b);     //求分子、分母的最大公约数
    numerator = a / g; //约分
    denominator = b / g;
}
rational::operator double() //把rational类型转换成double型
{
    return double(numerator) / double(denominator);
}
//重载运算符+
rational operator+(const rational &r1, const rational &r2)
{
    int n, d;
    n = r1.numerator * r2.denominator + r1.denominator * r2.numerator;
    d = r1.denominator * r2.denominator;
    return rational(n, d);
}
ostream &operator<<(ostream &output, const rational &x) //重载运算符<<
{
    output << x.numerator;
    if (x.denominator != 1)
        output << "/" << x.denominator;
    return output;
}
int gcd(int a, int b) //求最大公约数
{
    int g;
    if (b == 0)
        g = a;
    else
        g = gcd(b, a % b);
    return g;
}
int main()
{
    rational a(2, 4);
    rational b = 0.3;
    rational c = a + b; //调用友元重载运算符+和默认重载运算符=
    //调用类型转换operator double函数，以实数形式显示
    cout << double(a) << "+" << double(b) << "=" << double(c) << endl;
    //调用重载operator<<函数，以分数形式显示
    cout << a << "+" << b << "=" << c << endl;
    double x = b;    //用operator double 函数对b进行类型转换
    c = x + 1 + 0.6; //用rational(double)对表达式进行类型转换
    cout << x << "+" << 1 << "+" << 0.6 << "=" << double(c) << endl;
    cout << rational(x) << "+" << rational(1) << "+" << rational(0.6) << "=" << c << endl;
}