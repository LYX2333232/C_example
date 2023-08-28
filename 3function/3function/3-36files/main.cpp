#include <iostream>
#include "myarea.h"
using namespace std;
int main()
{
    double width, length;
    cout << "Please enter the width and length of a rectangle:\n";
    cin >> width >> length;
    cout << "Area of rectangle is:" << rect(width, length) << endl;
    double r;
    cout << "Please enter the radius of a circle:\n";
    cin >> r;
    cout << "Area of circle is:" << circle(r) << endl;
}