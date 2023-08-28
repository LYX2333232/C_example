#ifndef CIRCLE_H
#define CIRCLE_H
class circle : public point
{
    friend ostream &operator<<(ostream &, const circle &); //友元函数
protected:
    double radius; //数据成员，半径
public:
    circle(double r = 0.0, int x = 0, int y = 0); //构造函数
    void setR(double);                            //置半径值
    double getR() const;                          //返回半径
    double area() const;                          //返回面积
};
//带参数初始式构造函数，首先调用基类构造函数
circle::circle(double r, int a, int b) : point(a, b)
{
    setR(r);
}
//对半径置值
void circle::setR(double r)
{
    radius = (r >= 0) ? r : 0;
}
//返回半径
double circle::getR() const
{
    return 3, 14159 * radius * radius;
}
//输出圆心坐标和半径
ostream &operator<<(ostream &output, const circle &c)
{
    output << "Center=[" << c.x << "," << c.y << "];radius=" << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << c.radius;
    return output;
}
#endif