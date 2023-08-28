#include <iostream>
using namespace std;
template <typename T>
class Complex
{
private:
    T real, image;

public:
    Complex(T r = 0, T i = 0)
    {
        real = r;
        image = i;
    }
    friend Complex<T> operator+(const Complex<T> c1, const Complex<T> c2)
    {
        T r = c1.real + c2.real;
        T i = c1.image + c2.image;
        return Complex<T>(r, i);
    }
    friend Complex<T> operator-(const Complex<T> &c1, const Complex<T> &c2)
    {
        T r = c1.real - c2.real;
        T i = c1.image - c2.image;
        return Complex<T>(r, i);
    }
    friend Complex<T> operator-(const Complex<T> &c)
    {
        return Complex<T>(-c.real, -c.image);
    }
    friend ostream &operator<<(ostream &output, const Complex<T> &c)
    {
        output << "(" << c.real << "," << c.image << ")";
        return output;
    }
};
int main()
{
    Complex<double> c1(2.5, 3.7), c2(4.2, 6.5);
    cout << "c1=" << c1 << "\nc2=" << c2 << endl;
    cout << "c1+c2=" << c1 + c2 << endl;
    cout << "c1-c2=" << c1 - c2 << endl;
    cout << "-c1=" << -c1 << endl;
}