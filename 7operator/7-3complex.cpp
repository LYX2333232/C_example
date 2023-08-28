#include <iostream>
using namespace std;
class complex
{
private:
    double real, image;

public:
    complex(double r = 0, double i = 0);
    complex(int a)
    {
        real = a;
        image = 0;
    }
    void print() const;
    friend complex operator+(const complex &c1, const complex &c2);
    friend complex operator-(const complex &c1, const complex &c2);
    friend complex operator-(const complex &c);
};
complex::complex(double r, double i)
{
    real = r;
    image = i;
}
complex operator + (const complex &c1, const complex &c2)
{
    double r = c1.real + c2.real;
    double i = c1.image + c2.image;
    return complex(r, i);
}
complex operator - (const complex &c1, const complex &c2)
{
    double r = c1.real - c2.real;
    double i = c1.image - c2.image;
    return complex(r, i);
}
complex operator-(const complex &c)
{
    return complex(-c.real, -c.image);
}
void complex::print() const
{
    cout << '(' << real << ',' << image << ')' << endl;
}
int main()
{
    complex c1(2.5, 3.7), c2(4.2, 6.5);
    complex c;
    c = c1 - c2; // operator-(c1,c2)
    c.print();
    c = 25 + c2; // operator+(25,c2)
    c.print();
    c = c2 + 25; // operator+(c2,25)
    c.print();
    c = -c1; // operator-(c1);
    c.print();
}