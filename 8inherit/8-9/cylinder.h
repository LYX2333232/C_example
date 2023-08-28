#ifndef CYLINDER_H
#define CYLINDER_H
class cylinder : public circle
{
    friend ostream &operator<<(ostream &, const cylinder &); //友元函数
protected:
    double height; //数据成员，高度
public:
    cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0); //构造函数
    void setH(double);                                              //置高度值
    double getH() const;                                            //返回高度值
    double area() const;                                            //返回表面积
    double volume() const;                                          //返回体积
};
//带参数初始式构造函数，首先调用基类搞糟函数
cylinder::cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0)
{
    setH(h);
}
//对高度置值
void cylinder::setH(double h)
{
    height = (h > 0) ? h : 0;
}
//返回高度
double cylinder::getH() const
{
    return height;
}
//计算并返回圆柱体的表面积
double cylinder::area() const
{
    return 2 * circle::area() + 2 * 3.14159 * radius * height;
}
//计算并返回圆柱体的体积
double cylinder::volume() const
{
    return circle::area() * height;
}
//输出数据成员圆心坐标、半径和高度
ostream &operator<<(ostream &output, const cylinder &cy)
{
    output << "Center=[" << cy.x << "," << cy.y << "]"
           << ";radius=" << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << cy.radius << ";height=" << cy.height << endl;
    return output;
}
#endif