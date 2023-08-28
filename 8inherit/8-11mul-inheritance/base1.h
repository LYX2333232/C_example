#ifndef BASE1_H
#define BASE1_H
class base1
{
protected:
    int value;

public:
    base1(int x)
    {
        value = x;
    }
    int getdata() const
    {
        return value;
    }
};
#endif