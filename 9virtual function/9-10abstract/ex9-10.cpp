#include "figure.h"
int main()
{
    figure *p; //说明抽象类指针
    triangle t;
    square s;
    circle c;
    p = &t;
    p->set_dim(10.0, 5.0); // triangle::set_dim
    p->show_area();
    p = &s;
    p->set_dim(10.0, 5.0); // square::set_dim
    p->show_area();
    p = &c;
    p->set_dim(9.0); // circle::set_dim
    p->show_area();
}