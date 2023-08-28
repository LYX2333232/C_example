#include "figure.h"
int main()
{
    triangle t;
    square s;
    circle c;
    t.set_dim(10.0, 5.0);
    t.show_area();
    s.set_dim(10.0, 5.0);
    s.show_area();
    c.set_dim(9, 0);
    c.show_area();
}