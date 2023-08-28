#ifndef CIRCLE_FUN
//条件编译，若标识符CALCULATE_FUN未定义，则执行下一条定义宏指令
#define CIRCLE_FUN//用后续四行正文代替标识符CALCULATE_FUN
double circle(double radius){
    const double PI=3.14159;
    return PI*radius*radius;
}
#endif
double cone(double radius,double height);