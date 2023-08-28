#include <iostream>
using namespace std;
enum colour
{
    red,
    yellow,
    blue,
    white,
    black
};
int main()
{
    colour c;
    c = red;
    cout << "red:" << c << endl;
    c = blue;
    cout << "blue:" << c << endl;
    c = black;
    cout << "black:" << c << endl;
}