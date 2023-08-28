#include <iostream>
using namespace std;
class tricoor
{
public:
    tricoor(int mx = 0, int my = 0, int mz = 0);
    tricoor operator+(tricoor t);
    tricoor &operator++();
    tricoor &operator=(tricoor t);
    void show();
    void assign(int mx, int my, int mz);

private:
    int x, y, z; //��ά����ֵ
};
tricoor::tricoor(int mx, int my, int mz)
{
    x = mx;
    y = my;
    z = mz;
}
tricoor tricoor::operator+(tricoor t)
{
    tricoor temp;
    temp.x = x + t.x;
    temp.y = y + t.y;
    temp.z = z + t.z;
    return temp;
}
tricoor &tricoor::operator++()
{
    x++;
    y++;
    z++;
    return *this;
}
tricoor &tricoor::operator=(tricoor t)
{
    x = t.x;
    y = t.y;
    z = t.z;
    return *this;
}
void tricoor::show()
{
    cout << x << "," << y << ',' << z << '\n';
}
void tricoor::assign(int mx, int my, int mz)
{
    x = mx;
    y = my;
    z = mz;
}
int main()
{
    tricoor a(1, 2, 3), b, c;
    a.show();
    b.show();
    c.show();
    for (int i = 0; i < 5; i++)
        ++b;
    b.show();
    c.assign(3, 3, 3);
    c = a + b + c;
    c.show();
    c = b = a;
    c.show();
}