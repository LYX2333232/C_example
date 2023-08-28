#ifndef DERIVED_H
#define DERIVED_H
class derived : public base1, public base2 //公有继承base1和base2类
{
    friend ostream &operator<<(ostream &, const derived &);

private:
    double real;

public:
    derived(int, char, double);
    double getR() const;
};
derived::derived(int i, char c, double f) //派生类的构造函数
    : base1(i), base2(c), real(f)
{
}
double derived::getR() const { return real; }
ostream &operator<<(ostream &output, const derived &d)
{
    output << "    Integer:" << d.value << "\n    Character:" << d.letter << "\n   Real number:" << d.real;
    return output;
}
#endif