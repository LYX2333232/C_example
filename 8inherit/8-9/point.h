#ifndef POINT_H
#define POINT_H
class point
{
    friend ostream &operator<<(ostream &, const point &);

protected:
    int x, y; // point类的数据成员
public:
    point(int = 0, int = 0); //带默认参数的构造函数
    void setp(int, int);     //对点坐标数据赋值
    int getx() const
    {
        return x;
    }
    int gety() const
    {
        return y;
    }
};
//构造函数，调用成员函数对x,y进行初始化
point::point(int a, int b)
{
    setp(a, b);
}
//对数据成员置值
void point::setp(int a, int b)
{
    x = a;
    y = b;
}
//重载<<,输出对象数据
ostream &operator<<(ostream &output, const point &p)
{
    output << "[" << p.x << "," << p.y << "]";
    return output;
}
#endif