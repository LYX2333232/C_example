#include<iostream>
#include<iomanip>
using namespace std;
#include"point.h"
#include"circle.h"
#include"cylinder.h"
int main(){
    point p(72,115);//定义点对象并初始化
    cout<<"The initial location of p is "<<p<<endl;
    p.setp(10,10);//置点的新值
    cout<<"\nThe new location of p is "<<p<<endl;//输出数据
    circle c(2.5,37,43);//定义圆对象并初始化
    cout<<"\nThe initial location and radius of c are\n"<<c<<"\narea="<<c.area()<<"\n";
    c.setR(4.25);//置圆的新值
    c.setp(2,2);
    //输出圆心坐标和圆面积
    cout<<"\nThe initial location, radius of c are\n"<<c<<"\nArea="<<c.area()<<"\n";
    cylinder cy1(5.7,2.5,12,23);//定义圆柱体对象并初始化
    //输出圆柱体各数据和表面积，体积
    cout<<"\nThe initial location, radius and height of cy1 are\n"<<cy1<<" \nArea="<<cy1.area()<<"\nVolume="<<cy1.volume()<<'\n';
    cy1.setH(10);//置圆柱体的新值
    cy1.setR(4.25);
    cy1.setp(2,2);
    cout<<"\nThe new location, radius and height of cy1 are\n"<<cy1<<"Area="<<cy1.area()<<"\nVolume="<<cy1.volume()<<'\n';
    return 0;
}